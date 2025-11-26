#include <stdio.h>

int main() {
    int N, X;
    scanf("%d %d", &N, &X);

    int total = N * X;

    if (total >= 10000 && total <= 99999)
        printf("YES");
    else
        printf("NO");

    return 0;
}

