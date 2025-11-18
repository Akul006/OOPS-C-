#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "How many numbers? ";
    cin >> n;
    vector<long long> v(n);
    for (int i=0;i<n;i++) cin >> v[i];
    long long mx = v[0];
    for (int i=1;i<n;i++) if (v[i] > mx) mx = v[i];
    cout << "Max = " << mx << "\n";
    return 0;
}
