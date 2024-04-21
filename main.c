#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int shumafibonacci(int n) {
    if (n <= 0)
        return 0;
    else
        return fibonacci(n - 1) + shumafibonacci(n - 1);
}

int main() {
    int n;
    printf("Vendos numrin n: ");
    scanf("%d", &n);

    int shuma = shumafibonacci(n);
    printf("Shuma e %d-kufizave te vargut te Fibonacit eshte: %d\n", n, shuma);

    return 0;
}
