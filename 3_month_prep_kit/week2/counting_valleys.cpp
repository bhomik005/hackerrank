int countingValleys(int steps, string path) {
    // O(n) time| O(1) space
    int altitude = 0;
    int countValleys = 0;
    for(int i = 0; i < steps; ++i) {
        if(path[i] == 'U') {
            if(altitude == -1) countValleys++;
            altitude += 1;
        }
        else {
            altitude -= 1;
        }
    }
    return countValleys;
}
