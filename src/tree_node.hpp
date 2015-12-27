#ifndef TREE_NODE_HPP_INCLUDE
#define TREE_NODE_HPP_INCLUDE

#include <fstream>
#include <memory>

struct TreeNode {
  TreeNode(int val);
  TreeNode(int attr, int split_point);
  void serialize(std::ofstream &out);
  int attr, split_point, val, type;
  std::shared_ptr<TreeNode> left_child, right_child;
};

#endif /* end of include guard: TREE_NODE_HPP_INCLUDE */

