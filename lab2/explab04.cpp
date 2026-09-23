#include <iostream>
using namespace std;

// Function using reference
void updateReference(float &salary) {
    salary = salary + (salary * 10 / 100);
}

// Function using pointer
void updatePointer(float *salary) {
    *salary = *salary + (*salary * 10 / 100);
}

int main() {
    float salary1 = 50000;
    float salary2 = 50000;

    updateReference(salary1);
    updatePointer(&salary2);

    cout << "Salary using reference: " << salary1 << endl;
    cout << "Salary using pointer: " << salary2 << endl;

    return 0;
}