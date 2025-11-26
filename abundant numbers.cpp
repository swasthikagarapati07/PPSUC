#include <stdio.h>

int main() {
    int N, sum = 0;
    scanf("%d", &N);

    // Sum of proper divisors
    for (int i = 1; i < N; i++) {
        if (N % i == 0)
            sum += i;
    }

    if (sum > N)
        printf("True");
    else
        printf("False");

    return 0;
}

