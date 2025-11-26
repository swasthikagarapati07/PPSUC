#include <stdio.h>
#include <math.h>

int main() {
    int N, temp, count = 0, sum = 0;

    scanf("%d", &N);

    temp = N;

    // Count the digits
    while (temp > 0) {
        count++;
        temp /= 10;
    }

    temp = N;
    int pos = count;

    // Calculate sum of digits powered to positions
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, pos);
        pos--;
        temp /= 10;
    }

    if (sum == N)
        printf("True");
    else
        printf("False");

    return 0;
}

