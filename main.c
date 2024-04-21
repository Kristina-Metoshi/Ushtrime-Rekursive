#include <stdio.h>

int shumaNrCift(int n) {
    if (n < 1) {
        return 0;
    }
    return (2 * n) + shumaNrCift(n - 1);
}

int main() {
    int n = 5;
    int shuma = shumaNrCift(n);
    printf("Shuma e %d-kufizave te para te numrave cift eshte: %d\n", n, shuma);
    return 0;
}
