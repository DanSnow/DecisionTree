#include "decision_tree.hpp"
#include "tree_node.hpp"

#include <algorithm>
#include <array>
#include <iostream>
#include <unordered_set>
#include <cmath>

using namespace std;

namespace {
  const constexpr int ATTR_SIZE = 24;
  const constexpr double MAX_INFO = 1;

  bool split_examples(int attr, int split, const vector<int> &example);
}

shared_ptr<TreeNode> DecisionTree::gen_tree(vector<vector<int>> &examples) {
  examples_size = examples.size();
  return gen_tree(nullptr, examples.begin(), examples.end());
}

shared_ptr<TreeNode> DecisionTree::gen_tree(
    shared_ptr<TreeNode> parent,
    const vector<vector<int>>::iterator &begin_it,
    const vector<vector<int>>::iterator &end_it,
    int depth
  ) {
  int attr, split_point;
  size_t size = end_it - begin_it; // Size of current examples
  vector<vector<int>>::iterator split_it;
  shared_ptr<TreeNode> node;
  double info, child_info;

  // No more example
  if(begin_it == end_it) {
    return nullptr;
  }

  // Get entropy
  info = entropy(begin_it, end_it);

  cout << "Depth: " << depth << ", Data size: " << size << ", Info: " << info << endl;

  // It's exactly split into two part
  if(0 >= info) {
    // Return answer
    return make_shared<TreeNode>((*begin_it)[24]);
  }

  if(!parent) {
    tie(attr, split_point, child_info) = choose_attr(begin_it, end_it, split_it);
  } else {
    // Need to avoid to choose the same attribute
    tie(attr, split_point, child_info) = choose_attr(begin_it, end_it, split_it, parent->attr);
  }

  // Check if it can't split into two part
  if(attr == -1 || info <= child_info || 0.1 >= info) {
    // Count of 1 to decide answer
    size_t ans_1 = count_if(begin_it, end_it, [](const vector<int> &example) {
        return example[24] == 1;
    });
    // Check if 1 is more then half of current examples
    return make_shared<TreeNode>(ans_1 < size / 2 ? 2 : 1);
  }

  // Make a decision tree node
  cout << "Attr: " << attr << ", Split point: " << split_point << ", Child info: " << child_info << endl;
  cout << "Left data size: " << split_it - begin_it << ", Right data size: " << end_it - split_it << endl;

  node = make_shared<TreeNode>(attr, split_point);
  node->left_child = gen_tree(node, begin_it, split_it, depth + 1);
  node->right_child = gen_tree(node, split_it, end_it, depth + 1);
  return node;
}

tuple<int, int, double> DecisionTree::choose_attr(
    const vector<vector<int>>::iterator &begin_it,
    const vector<vector<int>>::iterator &end_it,
    vector<vector<int>>::iterator &min_split_it,
    int skip_attr) {
  double min_info = MAX_INFO;
  int attr = -1, split_point = -1;
  vector<vector<int>>::iterator split_it;
  for(int i = 0; i < ATTR_SIZE; ++i) {
    // Don't choose the same attr which parent used
    // Or we'll get a pointless split point
    if(i == skip_attr) {
      continue;
    }

    // Use set, so we don't need to manually remove duplicate attr
    // We don't need ordered
    unordered_set<int> attr_vals;
    for(auto it = begin_it; it != end_it; ++it) {
      // Add all value into a set
      attr_vals.insert((*it)[i]);
    }

    // Try to find a value to split example into two part
    for(int val : attr_vals) {
      double info;
      split_it = partition(begin_it, end_it, [i, val](const auto& examples){
        return split_examples(i, val, examples);
      });
      // Calculate entropy
      info = entropy(begin_it, split_it, end_it);
      // If get a smaller entropy
      if(min_info > info) {
        min_info = info;
        attr = i;
        split_point = val;
        min_split_it = split_it; // Write split point to #gen_tree
      }
    }
  }

  return make_tuple(attr, split_point, min_info);
}

// For multi set example
double DecisionTree::entropy(const array<vector<vector<int>>, 2> &examples_set) {
  double sum = 0;
  int total_size = examples_set[0].size() + examples_set[1].size();
  for(auto examples : examples_set) {
    sum += entropy(examples) * examples.size() / total_size;
  }
  return sum;
}

double DecisionTree::entropy(
    const vector<vector<int>>::iterator &begin_it,
    const vector<vector<int>>::iterator &split_it,
    const vector<vector<int>>::iterator &end_it
    ) {
  int total_size = end_it - begin_it;
  double info = entropy(begin_it, split_it) * (split_it - begin_it) / total_size;
  info += entropy(split_it, end_it) * (end_it - split_it) / total_size;
  return info;
}

// For single set example
double DecisionTree::entropy(vector<vector<int>> &examples) {
  double ans_count[2] = {0, 0};
  int size = examples.size();
  for(auto example : examples) {
    ++ans_count[example[24] - 1];
  }
  return -((ans_count[0] / size) * log2(ans_count[0] / size))
         - ((ans_count[1] / size) * log2(ans_count[1] / size));
}

double DecisionTree::entropy(const vector<vector<int>>::iterator &begin_it, const vector<vector<int>>::iterator &end_it) {
  double ans_count[2] = {0, 0};
  int size = end_it - begin_it;
  for(auto it = begin_it; it != end_it; ++it) {
    ++ans_count[(*it)[24] - 1];
  }
  return -((ans_count[0] / size) * log2(ans_count[0] / size))
         - ((ans_count[1] / size) * log2(ans_count[1] / size));
}

namespace {
  bool split_examples(int attr, int split, const vector<int> &example) {
    return example[attr] >= split;
  }
}
