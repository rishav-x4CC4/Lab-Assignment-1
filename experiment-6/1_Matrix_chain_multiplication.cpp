#include <iostream>
#include <limits.h>
using namespace std;

int matrixChainOrder(int p[], int n) {
    int m[n][n];

    for (int i = 1; i < n; i++) {
        m[i][i] = 0;
    }

    for (int len = 2; len < n; len++) {
        for (int i = 1; i < n - len + 1; i++) {
            int j = i + len - 1;
            m[i][j] = INT_MAX;
            for (int k = i; k < j; k++) {
                int q = m[i][k] + m[k+1][j] + p[i-1] * p[k] * p[j];
                if (q < m[i][j]) {
                    m[i][j] = q;
                }
            }
        }
    }

    return m[1][n-1];
}

int main() {
    int p[] = {40, 20, 30, 10, 30};
    int n = sizeof(p) / sizeof(p[0]);

    cout << "Minimum number of multiplications: "
         << matrixChainOrder(p, n) << endl;

    return 0;
}
