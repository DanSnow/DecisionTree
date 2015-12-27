#include "csv.hpp"

#include <fstream>
#include <boost/algorithm/string.hpp>

using namespace std;
using namespace boost;

vector<vector<int>> read_csv(const string &filename) {
  ifstream fin(filename);
  string line;
  vector<vector<int>> csv;
  while(getline(fin, line)) {
    vector<string> fields;
    vector<int> cols;
    split(fields, line, is_any_of(","));
    for(auto field : fields) {
      cols.push_back(stoi(field));
    }
    csv.push_back(cols);
  }
  return csv;
}
