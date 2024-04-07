#include <cmath>
#include <cstdio>
#include <set>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Sets are a part of the C++ STL that store unique elements following a specific order
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int> s; 
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        int q, x;
        cin >> q >> x;
        if(q == 1) s.insert(x);
        else if(q == 2) s.erase(x);
        else {
            set<int>::iterator itr = s.find(x);
            if(itr == s.end()) cout << "No" << endl;
            else cout << "Yes" << endl; 
        }
    }
    
    return 0;
}
