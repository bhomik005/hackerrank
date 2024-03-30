#include <iostream>
#include <iomanip>

using namespace std;

void plusMinus(vector<int> arr) {
  int p = 0, n = 0, z = 0;
  for(int num: arr) {
    if(num == 0) z++;
    else if(num > 0) p++;
    else n++;
  }
  float s = (float)arr.size();
  cout << setprecision(6) << p/s << "\n";
  cout << setprecision(6) << n/s << "\n";
  cout << setprecision(6) << z/s << "\n";
}


int main() {
  vector<int> arr = {-4, 3, -9, 0, 4, 1};
  plusMinus(arr);
  return 0;
}
