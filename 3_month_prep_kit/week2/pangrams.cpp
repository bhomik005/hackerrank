string pangrams(string s) {
    // O(n) time | O(1) constant
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    int count[26] ={0};
    for(int i = 0; i < s.length(); ++i) {
        count[tolower(s[i]) - 'a']++;
    }
    for(int i = 0;i < 26; ++i) {
        if(count[i] == 0) return "not pangram"; 
    }
    return "pangram";
}
