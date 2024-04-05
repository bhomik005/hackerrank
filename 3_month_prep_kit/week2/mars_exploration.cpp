int marsExploration(string s) {
    int count = 0;
    if(s.length() < 3) return count;
    int ptr1 = 0;
    int ptr2 = 1;
    int ptr3 = 2;
    // O(n) time | O(1) space
    while(ptr3 < s.size()) {
        if(s[ptr1] != 'S') {
            count++; 
        }
        if(s[ptr2] != 'O') {
            count++;
        }
        if(s[ptr3] != 'S') {
            count++;
        }
        ptr1 += 3;
        ptr2 += 3;
        ptr3 += 3;
    }
    return count;
}
