#include <iostream>
#include <fstream>

#include "csv.hpp"
#include "decision.hpp"

using namespace std;

int main(int argc, char *argv[]) {
  ofstream fout("output.csv");
  vector<vector<int>> attr_list = read_csv("input.csv");
  for(auto attrs : attr_list) {
    fout << decision(attrs) << endl;
  }
  fout.close();
  return 0;
}
