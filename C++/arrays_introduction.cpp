#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    int ar[n];
    for(int i = 0; i < n; ++i) {
        cin >> ar[i];
    }
    for(int i = n -1; i >= 0; --i) {
        cout << ar[i] << " ";
    }
    cout << "\n";
    return 0;
}
