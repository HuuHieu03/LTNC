#include <iostream>
#include <sstream>
using namespace std;

class Student {
    private:
        string age;
        string first_name;
        string last_name;
        string standard;
    public:
        void set_age(string a) {
            age = a;
        }
        void set_first_name (string s1) {
            first_name = s1;
        }
        void set_last_name (string s2) {
            last_name = s2;
        }
        void set_standard (string b) {
            standard = b;
        }
        string get_age() {
            return age;
        }
        string get_first_name () {
            return first_name;
        }
        string get_last_name () {
            return last_name;
        }
        string get_standard () {
           return standard;
        }
        string to_string() {
            string s = age + "," + first_name + "," + last_name + "," + standard;
            return s;
        }

};

int main() {
    string age, standard;
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
