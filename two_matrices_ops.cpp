#include <iostream>
using namespace std;

int main() {
    const int N=3;
    int A[N][N], B[N][N];

    cout << "Enter matrix A (3x3):\n";
    for (int i=0;i<N;i++) for (int j=0;j<N;j++) cin >> A[i][j];

    cout << "Enter matrix B (3x3):\n";
    for (int i=0;i<N;i++) for (int j=0;j<N;j++) cin >> B[i][j];

    // Sum matrix
    int Sum[N][N];
    for (int i=0;i<N;i++) for (int j=0;j<N;j++) Sum[i][j] = A[i][j] + B[i][j];

    cout << "\nSum Matrix (A+B):\n";
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++) cout << Sum[i][j] << " ";
        cout << "\n";
    }

    // Swap matrices (interchange)
    for (int i=0;i<N;i++) for (int j=0;j<N;j++) swap(A[i][j], B[i][j]);
    cout << "\nAfter swapping, Matrix A:\n";
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++) cout << A[i][j] << " ";
        cout << "\n";
    }

    // Multiply original (we swapped A and B; for multiplication use Sum as sample) 
    // I'll multiply the swapped A and B (current values)
    int C[N][N] = {0};
    for (int i=0;i<N;i++) for (int j=0;j<N;j++){
        C[i][j] = 0;
        for (int k=0;k<N;k++) C[i][j] += A[i][k] * B[k][j];
    }
    cout << "\nProduct Matrix (A x B):\n";
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++) cout << C[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
