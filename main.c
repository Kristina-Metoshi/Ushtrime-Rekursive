#include <stdio.h>

int m = 4;
int n = 4;

int shumaEElementeve(int matrica[][4], int m, int n);

int main() {
    int matrica[m][n];

    printf("Vendos vlerat e matrices %d x %d:\n", m, n);
    for (int i = 0; i <  m ; i++) {
        for (int j = 0; j < n ; j++) {
            printf("Vendos vleren per elementin [%d][%d]: ", i, j);
            scanf("%d", &matrica[i][j]);
        }
    }

    int shuma = shumaEElementeve(matrica, 0, 0);
    printf("Shuma e elementeve te matrices eshte: %d\n", shuma);

    return 0;
}

int shumaEElementeve(int matrica[][4], int m, int n) {

    if ( m == 4 - 1 && n == 4 - 1) {
        return matrica[m][n];
    }

    else if (n == 4 - 1) {
        return matrica[m][n] + shumaEElementeve(matrica, m + 1, 0);
    }

    else {
        return matrica[m][n] + shumaEElementeve(matrica, m, n + 1);
    }
}
