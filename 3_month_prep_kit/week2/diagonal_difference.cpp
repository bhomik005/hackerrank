int diagonalDifference(vector<vector<int>> arr) {
    // O(n) time | O(1) space
    int leftDiagonalSum = 0;
    int rightDiagonalSum = 0;
    for(size_t i = 0; i < arr.size(); ++i) {
        leftDiagonalSum += arr[i][i];
        rightDiagonalSum += arr[i][arr.size() - i - 1];
    }
    return abs(leftDiagonalSum - rightDiagonalSum);
}
