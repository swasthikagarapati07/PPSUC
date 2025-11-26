#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N], sum = 0;
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int avg = sum / N;   // integer average

    int found = 0;
    for(int i = 0; i < N; i++) {
        if(arr[i] == avg) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("True");
    else
        printf("False");

    return 0;
}

