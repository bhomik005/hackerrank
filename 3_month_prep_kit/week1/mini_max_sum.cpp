#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

void miniMaxSum(vector<int> arr) {
  // O(n log n) time | O(1) space
  sort(arr.begin(), arr.end());
  long int min = (long)arr[0] + arr[1] + arr[2] + arr[3];
  long int max = (long)arr[1] + arr[2] + arr[3] + arr[4];
  cout << min << " " << max << "\n";
}


int main() {
  vector<int> arr = {1, 3, 5, 7, 9};
  miniMaxSum(arr); // 16 24
  return 0;
}
