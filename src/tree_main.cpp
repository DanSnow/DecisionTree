#include <iostream>
#include <fstream>
#include <memory>
#include <vector>

#include "csv.hpp"
#include "decision_tree.hpp"
#include "tree_node.hpp"

using namespace std;

int main(int argc, char *argv[]) {
  ofstream fout("tree.dump");
  vector<vector<int>> examples = read_csv(argv[1]);
  DecisionTree decision_tree;
  shared_ptr<TreeNode> root;
  root = decision_tree.gen_tree(examples);
  root->serialize(fout);
  fout.close();
  return 0;
}
