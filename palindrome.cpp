#include <stdio.h>

int main() {
    int N, rev = 0, temp;
    scanf("%d", &N);

    temp = N;

    while (temp > 0) {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }

    if (rev == N)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}

