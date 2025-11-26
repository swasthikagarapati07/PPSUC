#include <stdio.h>

int main() {
    int N, sum = 0, product = 1, temp;
    scanf("%d", &N);

    temp = N;

    while (temp > 0) {
        int digit = temp % 10;
        sum += digit;
        product *= digit;
        temp /= 10;
    }

    if (sum == product)
        printf("Spy Number");
    else
        printf("Not Spy Number");

    return 0;
}

