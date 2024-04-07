#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string,int> m;
    int qs; 
    cin >> qs;
    for(int i = 0; i < qs; ++i) {
        int q;
        cin >> q;
        if(q == 1) {
            string x;
            int y;
            cin >> x >> y;
            auto itr = m.find(x);
            if(itr != m.end()) {
                itr->second += y;
            }
            else {
                m.insert(make_pair(x,y));
            }
            m.insert(make_pair(x, y));
        }
        else if( q == 2) {
            string x;
            cin >> x;
            m.erase(x);
        }
        else {
            string x;
            cin >> x;
            map<string,int>::iterator itr = m.find(x);
            if(itr != m.end()) cout << itr->second << endl;
            else cout << 0 << endl;
        }
    }
    return 0;
}
