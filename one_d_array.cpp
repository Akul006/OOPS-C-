#include <iostream>
using namespace std;

int main(){
    // print 1..5
    cout << "Numbers 1 to 5:\n";
    for (int i=1;i<=5;i++) cout << i << " ";
    cout << "\n\n";

    // accept 10 numbers and display addition
    const int N = 10;
    int a[N];
    cout << "Enter 10 integers:\n";
    int sum=0;
    for (int i=0;i<N;i++){ cin >> a[i]; sum += a[i]; }
    cout << "Sum = " << sum << "\n";

    // count two-digit even numbers
    int count_two_digit_even = 0;
    for (int i=0;i<N;i++){
        if (a[i] >= 10 && a[i] <= 99 && a[i] % 2 == 0) count_two_digit_even++;
    }
    cout << "Two-digit even count = " << count_two_digit_even << "\n";

    return 0;
}
