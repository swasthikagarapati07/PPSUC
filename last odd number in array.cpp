#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int lastOdd = -1;

    for(int i = 0; i < N; i++) {
        if(arr[i] % 2 != 0) {     // odd number
            lastOdd = arr[i];
        }
    }

    printf("%d", lastOdd);
    return 0;
}

