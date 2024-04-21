#include <stdio.h>

int prodhimiCift(int n) {

    if (n <= 1) {
        return 1;
    }

    if (n % 2 == 0) {
        return n * prodhimiCift(n - 2);
    }
    else {
        return prodhimiCift(n - 1);
    }
}

int main() {
    int n;
    printf("Jepni numrin n: ");
    scanf("%d", &n);

    int rezultati = prodhimiCift(n);
    printf("Prodhimi i numrave cift per %d kufizat e para cift eshte: %d\n", n, rezultati);

    return 0;
}
