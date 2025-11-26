#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int a = 0, b = 1, c;

    // Check directly for 0 or 1
    if (N == 0 || N == 1) {
        printf("True");
        return 0;
    }

    // Generate Fibonacci numbers until >= N
    while (b < N) {
        c = a + b;
        a = b;
        b = c;
    }

    if (b == N)
        printf("True");
    else
        printf("False");

    return 0;
}

