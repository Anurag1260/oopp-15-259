#include <iostream>
using namespace std;

int main() {
    float salary = 50000;

    // newSalary is a reference to salary
    float &newSalary = salary;

    newSalary = newSalary + (newSalary * 10 / 100);

    cout << "Salary from old variable: " << salary << endl;
    cout << "Salary from reference variable: " << newSalary << endl;

    return 0;
}