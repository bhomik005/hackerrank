#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


int main() {
    string input;
    while(getline(cin,input)) {
        input.erase(remove(input.begin(), input.end(), '\r'), input.end());
        if(input[0] == 'S') {
            if(input[2] == 'M') {
                string res = input.substr(4, input.size() - 2);
                res = res.substr(0, res.size() - 2);
                int index = 0;
                for(int i = 0;i < res.size(); ++i) {
                    if(isupper(res[i])) {
                        res[i] = tolower(res[i]);
                        index = i;
                    }
                }
                res = res.substr(0, index) + " " + res.substr(index);
                cout << res << "\n";
            }
            else if(input[2] == 'C') {
            string res = input.substr(4);
            string output;
            for(int i = 0; i < res.length(); ++i) {
                if(i > 0 && isupper(res[i])) {
                    output.push_back(' ');
                    output.push_back(tolower(res[i]));
                }
                else {
                    output.push_back(tolower(res[i]));
                }
            }
            cout << output << "\n";
            }
            else if(input[2] == 'V'){
                string res = input.substr(4);
                string output;
                for(int i = 0; i < res.length(); ++i) {
                    if(isupper(res[i])) {
                        output.push_back(' ');
                        output.push_back(tolower(res[i]));
                    }
                    else output.push_back(tolower(res[i]));
                }
                cout << output << "\n";
            }
        }
        else {
            if(input[2] == 'V') {
                string res = input.substr(4);
                string output;
                for(int i = 0; i < res.length(); ++i ) {
                    if(res[i] == ' ') {
                        output.push_back(toupper(res[i+1]));
                        i++;
                    }
                    else output.push_back(res[i]);
                }
                cout << output << "\n";
            }
            else if(input[2] == 'C') {
                string res = input.substr(4);
                string output;
                output.push_back(toupper(res[0]));
                for(int i = 1; i < res.length(); ++i) {
                    if(res[i] == ' ') {
                        output.push_back(toupper(res[i+1]));
                        i++;
                    }
                    else {
                        output.push_back(res[i]);
                    }
                }
                cout << output << endl;
            }
            else if(input[2] == 'M') {
                string res = input.substr(4);
                string output;
                for(int i = 0; i < res.length(); ++i) {
                    if(res[i] == ' ') {
                        output.push_back(toupper(res[i+1]));
                        i++;
                    }
                    else output.push_back(res[i]);
                }
                output.push_back('(');
                output.push_back(')');
                cout << output << endl;
            }
        }        
    }

    return 0;
}
