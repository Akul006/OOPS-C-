#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int d1 = n/1000;
    int d2 = (n/100)%10;
    int d3 = (n/10)%10;
    int d4 = n%10;

    cout << "Rule1: ";
    if(d1 + d2 > d3 + d4) cout << "True\n"; else cout << "False\n";

    int sum = d1+d2+d3+d4;
    cout << "Sum even? " << (sum % 2 == 0 ? "Yes" : "No") << endl;

    cout << "Single digit? " << (sum < 10 ? "Yes" : "No");
}
