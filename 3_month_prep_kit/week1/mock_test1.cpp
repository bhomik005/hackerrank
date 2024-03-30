#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int findMedian(vector<int> arr) {
  sort(arr.begin(), arr.end());
  int med = arr.size() / 2;
  return arr[med];
}

int main() {
  vector<int> arr = {0, 1 , 2, 4, 6, 5, 3};
  int median = findMedian(arr);
  cout << median << "\n"; // 3
  return 0;
}
