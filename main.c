#include <stdio.h>

// Prototipi i funksionit
int eshteSimetrik(int v[], int n);

int main() {
    int a[] = {1, 2, 3, 2, 1}; // vektori simetrik
    int n = sizeof(a) / sizeof(a[0]);
    int x;

    x = eshteSimetrik(a, n);

    if (x) {
        printf("Vektori eshte simetrik.\n");
    } else {
        printf("Vektori nuk eshte simetrik.\n");
    }

    return 0;
}

int eshteSimetrik(int v[], int n) {
    if (n < 2) {
        return 1; // Vektori me 0 ose 1 element konsiderohet simetrik
    }

    if (v[0] != v[n - 1]) {
        return 0; // false, vektori nuk eshte simetrik
    }

    return eshteSimetrik(v + 1, n - 2);
}
