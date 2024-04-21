#include <stdio.h>

int sasiaCift(int v[], int n);

int main() {
    printf("Shuma elementeve te vektorit:\n");
    int x = 0;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    x = sasiaCift(a, 10);
    printf("Sasia e numrave cift ne vektor eshte: %d\n", x);
    printf("\n");
    return 0;
}

int sasiaCift(int v[], int n) {
    if (n < 1) {
        return 0;
    }

    if (v[n - 1] % 2 == 0) {
        return 1 + sasiaCift(v, n - 1);
    } else {
        return sasiaCift(v, n - 1);
    }
}
