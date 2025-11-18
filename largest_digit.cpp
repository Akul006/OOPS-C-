#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int d1 = n / 10, d2 = n % 10;

    if(d1 > d2)
        cout << d1;
    else
        cout << d2;
}
