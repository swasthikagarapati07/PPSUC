#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int lastEvenIndex = -1;

    for(int i = 0; i < N; i++) {
        if(arr[i] % 2 == 0) {    // even element
            lastEvenIndex = i;
        }
    }

    printf("%d", lastEvenIndex);
    return 0;
}

