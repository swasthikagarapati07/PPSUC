#include <stdio.h>

int main() {
    int N, sum = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int x;
        scanf("%d", &x);
        if (x % 2 == 0) {
            sum += x;
        }
    }

    printf("%d", sum);

    return 0;
}

