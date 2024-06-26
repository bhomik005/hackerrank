vector<int> gradingStudents(vector<int> grades) {
    // O(n) time | O(1) space
    for(int i = 0; i < grades.size(); ++i) {
        if(grades[i] < 38) continue;
        else if((grades[i] % 5) >= 3) {
            grades[i] = grades[i] + ( 5 - grades[i] % 5);
        }
    }
    return grades;
}
