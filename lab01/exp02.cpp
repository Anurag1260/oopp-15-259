#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int roll;
    string branch;

public:
    void input() {
        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Roll No: ";
        cin >> roll;

        cout << "Enter Branch: ";
        cin >> branch;
    }

    void display() {
        cout << "\nStudent Record" << endl;
        cout << "Name   : " << name << endl;
        cout << "Roll   : " << roll << endl;
        cout << "Branch : " << branch << endl;
    }
};

int main() {
    Student student;

    student.input();
    student.display();

    return 0;
}