#include <iostream>
#include <string>

using namespace std;

string timeConversion(string s) {
  if(s[8] == 'A') {
    if(s[0] == '1' && s[1] == '2') {
      s[0] = '0';
      s[1] = '0';
    }
  } else {
    if(s.substr(0,2) != "12") {
     int firstTwoDigits = stoi(s.substr(0,2));
     int addTwelve = firstTwoDigits + 12;
     string digits = to_string(addTwelve); 
     s[0] = digits[0];
     s[1] = digits[1];
    }
  }
  return s.substr(0,8);
}

int main() {
  string s;
  s = "07:05:45PM";
  cout << timeConversion(s) << "\n"; // 19:05:45
  s = "12:01:00PM";
  cout << timeConversion(s) << "\n"; // 12:01:00
  s = "12:01:00AM";
  cout << timeConversion(s) << "\n"; // 00:01:00
  return 0;
}
