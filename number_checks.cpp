#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int x) {
    if (x <= 1) return false;
    if (x <= 3) return true;
    if (x % 2 == 0) return false;
    for (int i=3;i*i<=x;i+=2) if (x%i==0) return false;
    return true;
}

bool isPalindrome(int x) {
    if (x < 0) return false;
    int orig = x, rev=0;
    while (x>0) { rev = rev*10 + x%10; x/=10; }
    return rev == orig;
}

bool isArmstrong(int x) {
    if (x < 0) return false;
    int orig = x, sum=0, digits=0, t=x;
    while (t>0){ digits++; t/=10; }
    t = orig;
    while (t>0){ int d=t%10; sum += (int)pow(d,digits); t/=10; }
    return sum == orig;
}

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << "Prime? " << (isPrime(num) ? "Yes" : "No") << "\n";
    cout << "Palindrome? " << (isPalindrome(num) ? "Yes" : "No") << "\n";
    cout << "Armstrong? " << (isArmstrong(num) ? "Yes" : "No") << "\n";
    return 0;
}
