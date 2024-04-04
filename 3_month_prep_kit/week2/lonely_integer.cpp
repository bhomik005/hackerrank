// a = [1, 2, 3, 4, 3, 2, 1]
// Approach 1 - iterate over the elements multiple times and time will be O(n^2) and O(1)
// 1 -> 2
// 2 -> 2
// 3 -> 2
// not sorted
// Time -> O(n) || Space -> O(n/2 + 1)
// Time -> O(n) || Space -> O(n)
// if the array has only element then return that element

int lonelyinteger(vector<int> a) {
    unordered_map<int,int> freqNums;
    int res = 0;
    // base case
    if(a.size() == 1) return a[0];
    // iterate over the array and store the elements and freq in the hashmap
    for(int i = 0; i < a.size(); ++i) {
        if(freqNums.find(a[i]) == freqNums.end()) freqNums[a[i]] = 0;
        freqNums[a[i]] += 1;
    }
    // iterate over the hashmap and return the element with frequency of num 1
    for(auto itr = freqNums.begin(); itr != freqNums.end(); ++itr) {
        if(itr->second == 1) {
            res = itr->first;
            break;
        }
    }
    return res;
}
