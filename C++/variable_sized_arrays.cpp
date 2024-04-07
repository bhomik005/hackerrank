#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int numOfVariableArrays;
    int numOfQueries;
    cin >> numOfVariableArrays >> numOfQueries;
    int** p = new int*[numOfVariableArrays];
    for(int i = 0; i < numOfVariableArrays; ++i) {
        int numOfCols;
        cin >> numOfCols;
        p[i] = new int[numOfCols];
        for(int j = 0; j < numOfCols; ++j) {
            int num;
            cin >> p[i][j];
        }
    }
    
    for(int i = 0; i < numOfQueries; ++i) {
        int row, col;
        cin >> row >> col;
        cout << p[row][col] << endl;
    }
    
    // Freeing up the memory allocated to the 2D array in the heap
    for(int i = 0; i < numOfVariableArrays; ++i) {
        delete [] p[i];
    }
    delete [] p;
    return 0;
}
