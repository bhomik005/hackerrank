#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Vectors are sequence containers representing arrays that can change in size.
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
    sort(v.begin(), v.end());
    for(int n : v) cout << n << " ";
    cout << endl;
    return 0;
}
