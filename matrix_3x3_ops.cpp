#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int N = 3;
    int a[N][N];

    cout << "Enter 3x3 matrix elements (row-wise):\n";
    for (int i=0;i<N;i++) for (int j=0;j<N;j++) cin >> a[i][j];

    // Print
    cout << "\nMatrix:\n";
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++) cout << a[i][j] << " ";
        cout << "\n";
    }

    // Sum of all elements
    int totalSum = 0;
    for (int i=0;i<N;i++) for (int j=0;j<N;j++) totalSum += a[i][j];
    cout << "\nSum of all elements: " << totalSum << "\n";

    // Count positive and negative
    int pos=0, neg=0;
    for (int i=0;i<N;i++) for (int j=0;j<N;j++){
        if (a[i][j] >= 0) pos++; else neg++;
    }
    cout << "Positive count: " << pos << ", Negative count: " << neg << "\n";

    // Display max
    int mx = a[0][0];
    for (int i=0;i<N;i++) for (int j=0;j<N;j++) if (a[i][j] > mx) mx = a[i][j];
    cout << "Max element: " << mx << "\n";

    // Row sums
    cout << "\nRow sums:\n";
    for (int i=0;i<N;i++){
        int rs=0;
        for (int j=0;j<N;j++) rs += a[i][j];
        cout << "Row " << i << " sum = " << rs << "\n";
    }

    // Diagonal sums
    int mainDiag=0, secDiag=0;
    for (int i=0;i<N;i++){
        mainDiag += a[i][i];
        secDiag += a[i][N-1-i];
    }
    cout << "Main diagonal sum: " << mainDiag << "\n";
    cout << "Secondary diagonal sum: " << secDiag << "\n";

    // Transpose
    cout << "\nTranspose:\n";
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++) cout << a[j][i] << " ";
        cout << "\n";
    }

    // Example: count primes, Armstrong, palindrome in matrix elements (positive ints)
    auto isPrime=[&](int x)->bool{
        if (x <= 1) return false;
        if (x <= 3) return true;
        if (x%2==0) return false;
        for (int i=3;i*i<=x;i+=2) if (x%i==0) return false;
        return true;
    };
    auto isPalindrome=[&](int x)->bool{
        if (x<0) return false;
        int orig = x, rev=0;
        while (x>0){ rev = rev*10 + x%10; x/=10; }
        return rev == orig;
    };
    auto isArmstrong=[&](int x)->bool{
        if (x<0) return false;
        int orig = x, sum=0;
        int digits = 0, t = x;
        while (t>0){ digits++; t/=10; }
        t = orig;
        while (t>0){ int d = t%10; int p=1; for (int i=0;i<digits;i++) p*=d; sum+=p; t/=10; }
        return sum == orig;
    };

    int primeCount=0, palCount=0, armCount=0;
    for (int i=0;i<N;i++) for (int j=0;j<N;j++){
        int val = a[i][j];
        if (isPrime(val)) primeCount++;
        if (isPalindrome(val)) palCount++;
        if (isArmstrong(val)) armCount++;
    }
    cout << "\nPrime count: " << primeCount << "\n";
    cout << "Palindrome count: " << palCount << "\n";
    cout << "Armstrong count: " << armCount << "\n";

    return 0;
}
