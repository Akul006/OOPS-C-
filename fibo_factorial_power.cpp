#include <iostream>
using namespace std;

long long factorial(int n) {
    long long f = 1;
    for (int i=2;i<=n;i++) f *= i;
    return f;
}

long long power(long long base, int exp) {
    long long res = 1;
    for (int i=0;i<exp;i++) res *= base;
    return res;
}

int main(){
    // Fibonacci
    int n;
    cout << "Fibonacci - enter number of terms: ";
    cin >> n;
    long long a=0, b=1;
    cout << "Fibo: ";
    for (int i=1;i<=n;i++){
        cout << a << (i==n? "\n":" ");
        long long next = a + b;
        a = b; b = next;
    }

    // Factorial
    int m;
    cout << "Enter number for factorial: ";
    cin >> m;
    cout << m << "! = " << factorial(m) << "\n";

    // Power
    long long base; int exp;
    cout << "Enter base and exponent: ";
    cin >> base >> exp;
    cout << base << "^" << exp << " = " << power(base, exp) << "\n";

    return 0;
}
