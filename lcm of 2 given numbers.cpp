#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int M, N;
    scanf("%d %d", &M, &N);

    int g = gcd(M, N);
    int lcm = (M * N) / g;

    printf("%d", lcm);

    return 0;
}

