#include <stdio.h>

int main() {
    int N, isPrime = 1;
    scanf("%d", &N);

    if (N <= 1) {
        isPrime = 0;  // 1 is not prime
    } else {
        for (int i = 2; i <= N / 2; i++) {
            if (N % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}

