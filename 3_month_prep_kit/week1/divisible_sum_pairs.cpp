#include <iostream>
#include <string>

using namespace std;

int divisibleSumPairs(int n, int k, vector<int> ar) {
  // O(n^2) time | O(1) space
  int count = 0;
  for(int i = 0; i < n - 1; ++i) {
    for(int j = i + 1; j < n; ++j) {
      if(((ar[i] + ar[j]) % k) == 0) count++;
    }
  }
  return count;
}

int main() {
 vector<int> arr = {1, 2, 3, 4, 5, 6};
 int n = arr.size();
 int k = 5;
 cout << divisibleSumPairs(n, k, arr) << "\n";
 return 0;
}
