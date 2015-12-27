#include "tree_node.hpp"

using namespace std;

TreeNode::TreeNode(int val) : val(val) {
  type = 0;
  attr = -1;
  split_point = -1;
}

TreeNode::TreeNode(int attr, int split_point)
  : attr(attr), split_point(split_point) {
  type = 1;
  val = -1;
}

void TreeNode::serialize(ofstream &out) {
  out << type << " " << attr << " " << split_point << " " << val << endl;
  if(left_child) {
    left_child->serialize(out);
  } else {
    out << -1 << " " << -1 << " " << -1 << " " << -1 << endl;
  }

  if(right_child) {
    right_child->serialize(out);
  } else {
    out << -1 << " " << -1 << " " << -1 << " " << -1 << endl;
  }
}
