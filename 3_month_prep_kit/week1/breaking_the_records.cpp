#include <iostream>
#include <vector>

using namespace std;

vector<int> breakingRecords(vector<int> scores) {
  // O(n) time | O(1) space
  int min = 0;
  int max = 0;
  int minScores = scores[0];
  int maxScores = scores[0];
  for(int i = 1; i < scores.size(); ++i) {
    if(scores[i] < minScores) {
      minScores = scores[i];
      min++;
    }
    else if(scores[i] > maxScores) {
      maxScores = scores[i];
      max++;
    }
  }
  return {max,min};
}


int main() {
  vector<int> scores = {12, 24, 10, 24};
  vector<int> res = breakingRecords(scores);
  cout << res[0] << " " << res[1] << "\n"; // 1 1
  return 0;
}
