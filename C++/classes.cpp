#include <iostream>
#include <sstream>
using namespace std;

class Student {
    // private variables can only be accessed by the member functions and it cannot be accessed
    // outside the class
    // >> (right shift) - reading from the string stream
    // << (left shift)  - inserting to the string stream
    // string stream is an insertion operator which multiplier
    private:
        int age;
        string first_name;
        string last_name;
        int standard;
    
    // public members can be accessed from anywhere the code is visible
    public:
        /*
         * getters and setters for the variables
        */
        int get_age() {
            return age;
        }
        void set_age(int a) {
            age = a;
        } 
        string get_first_name() {
            return first_name;
        }
        void set_first_name(string f) {
            first_name = f;
        }
        string get_last_name() {
            return last_name;
        }
        void set_last_name(string l) {
            last_name = l;
        }
        int get_standard() {
            return standard;
        }
        void set_standard(int s) {
            standard = s;
        }  
        string to_string() {
            stringstream ss;
            ss << age << "," << first_name << "," << last_name << "," << standard;
            return ss.str(); 
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
