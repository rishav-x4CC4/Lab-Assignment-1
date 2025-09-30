#include <iostream>
using namespace std;

#define N 2  // Strassen works with 2^n matrices

void strassen(int A[N][N], int B[N][N], int C[N][N]) {
    int M1, M2, M3, M4, M5, M6, M7;

    int a = A[0][0], b = A[0][1], c = A[1][0], d = A[1][1];
    int e = B[0][0], f = B[0][1], g = B[1][0], h = B[1][1];

    M1 = (a + d) * (e + h);
    M2 = (c + d) * e;
    M3 = a * (f - h);
    M4 = d * (g - e);
    M5 = (a + b) * h;
    M6 = (c - a) * (e + f);
    M7 = (b - d) * (g + h);

    C[0][0] = M1 + M4 - M5 + M7;
    C[0][1] = M3 + M5;
    C[1][0] = M2 + M4;
    C[1][1] = M1 - M2 + M3 + M6;
}

int main() {
    int A[N][N] = {{1, 2}, {3, 4}};
    int B[N][N] = {{5, 6}, {7, 8}};
    int C[N][N];

    strassen(A, B, C);

    cout << "Result (Strassen Multiplication):\n";
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
