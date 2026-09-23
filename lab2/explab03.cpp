#include <iostream>
using namespace std;

int main() {
    float salary = 50000;

    // Pointer stores address of salary
    float *newSalary = &salary;

    *newSalary = *newSalary + (*newSalary * 10 / 100);

    cout << "Salary from old variable: " << salary << endl;

    return 0;
}