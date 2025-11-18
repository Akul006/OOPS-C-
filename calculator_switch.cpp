#include <iostream>
using namespace std;

int main() {
    int ch;
    cout << "1.Area of circle\n2.Circumference\n3.Area of triangle\n4.Exit\n";
    cout << "Enter choice: ";
    cin >> ch;

    float r, b, h;

    switch(ch) {
        case 1:
            cin >> r;
            cout << 3.14 * r * r;
            break;

        case 2:
            cin >> r;
            cout << 2 * 3.14 * r;
            break;

        case 3:
            cin >> b >> h;
            cout << 0.5 * b * h;
            break;

        default:
            cout << "Invalid";
    }
}
