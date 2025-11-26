#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int evenSum = 0, oddSum = 0;

    for(int i = 0; i < N; i++) {
        if(i % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }

    int diff = abs(evenSum - oddSum);
    printf("%d", diff);

    return 0;
}

