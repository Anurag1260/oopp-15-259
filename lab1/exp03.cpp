#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    void input() {
        cout << "Enter value of x: ";
        cin >> x;

        cout << "Enter value of y: ";
        cin >> y;
    }

    void show() {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

int main() {
    Point p1, p2;

    cout << "Enter details of Point 1:\n";
    p1.input();

    cout << "\nEnter details of Point 2:\n";
    p2.input();

    cout << "\n Point 1\n";
    p1.show();

    cout << "\n Point 2\n";
    p2.show();

    return 0;
}