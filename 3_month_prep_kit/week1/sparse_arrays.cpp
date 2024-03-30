#include <iostream>
#include <vector>

using namespace std;

vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
  vector<int> v(queries.size(), 0);
  for(int i = 0; i < queries.size(); ++i) {
    for(int j = 0; j < strings.size(); ++j) {
      if(queries[i] == strings[j]) v[i]++;
    }
  }
  return v;
}

int main() {
  vector<string> strings = {"ab", "ab", "abc"};
  vector<string> queries = {"ab", "abc", "bc"};
  vector<int> res(queries.size(), 0);
  res = matchingStrings(strings, queries);
  for(int i = 0; i < queries.size(); ++i) {
    cout << res[i] << " ";
  }
  cout << "\n";
  return 0;
}
