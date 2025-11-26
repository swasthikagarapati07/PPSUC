#include <stdio.h>

int main() {
    int N, sq, sum = 0;
    scanf("%d", &N);

    sq = N * N;

    while (sq > 0) {
        sum += sq % 10;
        sq /= 10;
    }

    if (sum == N)
        printf("Neon Number");
    else
        printf("Not Neon Number");

    return 0;
}

