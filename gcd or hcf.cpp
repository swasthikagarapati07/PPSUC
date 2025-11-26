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
    int N, M;
    scanf("%d %d", &N, &M);

    printf("%d", gcd(N, M));

    return 0;
}

