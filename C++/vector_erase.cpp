#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    vector<int> v;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    int x;
    cin >> x;
    v.erase(v.begin()+ x - 1);
    int start, end;
    cin >> start >> end;
    v.erase(v.begin() + start - 1, v.begin() + end - 1);
    cout << v.size() << endl;
    for(int num : v) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
