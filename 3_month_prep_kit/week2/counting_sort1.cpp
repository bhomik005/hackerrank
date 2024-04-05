vector<int> countingSort(vector<int> arr) {
    vector<int>freqNums(100,0);
    // O(n) time | O(1) space
    for(int num : arr) freqNums[num]++;
    return freqNums;
}
