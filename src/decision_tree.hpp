#ifndef DECISION_TREE_HPP_INCLUDE
#define DECISION_TREE_HPP_INCLUDE

#include <array>
#include <vector>
#include <tuple>
#include <memory>

class TreeNode;

class DecisionTree {
public:
  DecisionTree() {}
  std::shared_ptr<TreeNode> gen_tree(std::vector<std::vector<int>> &examples);
  std::shared_ptr<TreeNode> gen_tree(
      std::shared_ptr<TreeNode> parent,
      const std::vector<std::vector<int>>::iterator &begin_it,
      const std::vector<std::vector<int>>::iterator &end_it,
      int depth = 0
  );

private:
  std::shared_ptr<TreeNode> root;
  int examples_size;

  double entropy(const std::array<std::vector<std::vector<int>>, 2> &example_set);

  double entropy(
      const std::vector<std::vector<int>>::iterator &begin_it,
      const std::vector<std::vector<int>>::iterator &split_it,
      const std::vector<std::vector<int>>::iterator &end_it
      );

  double entropy(std::vector<std::vector<int>> &examples);
  double entropy(
      const std::vector<std::vector<int>>::iterator &begin_it,
      const std::vector<std::vector<int>>::iterator &end_it
      );

  std::tuple<int, int, double> choose_attr(
      const std::vector<std::vector<int>>::iterator &begin_it,
      const std::vector<std::vector<int>>::iterator &end_it,
      std::vector<std::vector<int>>::iterator &split_it,
      int skip_attr = -1
  );
};

#endif /* end of include guard: DECISION_TREE_HPP_INCLUDE */

