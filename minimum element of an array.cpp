#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int min, x;

    // Read first element and set as minimum
    scanf("%d", &min);

    // Read remaining elements
    for (int i = 1; i < N; i++) {
        scanf("%d", &x);
        if (x < min) {
            min = x;
        }
    }

    printf("%d", min);

    return 0;
}

