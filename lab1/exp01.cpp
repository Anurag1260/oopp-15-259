#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int roll;
    string branch;

    void input() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Roll No: ";
        cin >> roll;

        cout << "Enter Branch: ";
        cin >> branch;
    }

    void show() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll << endl;
        cout << "Branch: " << branch << endl;
    }
};

int main() {
    Student s1, s2;

    cout << "Enter details of Student 1:\n";
    s1.input();

    cout << "\nEnter details of Student 2:\n";
    s2.input();

    cout << "\n--- Student 1 Details ---\n";
    s1.show();

    cout << "\n--- Student 2 Details ---\n";
    s2.show();

    return 0;
}