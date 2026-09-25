#include <iostream>
using namespace std;

// Call by Value
void byValue(int x) {
    x = x + 10;
}

// Call by Reference
void byReference(int &x) {
    x = x + 10;
}

// Call by Address
void byAddress(int *x) {
    
    *x = *x + 10;

}

int main() {
    int a = 10;
    int b = 10;
    int c = 10;

    byValue(a);
    byReference(b);
    byAddress(&c);

    cout << "After Call by Value: " << a << endl;
    cout << "After Call by Reference: " << b << endl;
    cout << "After Call by Address: " << c << endl;

    return 0;
}