#include <stdio.h>

int main() {
    int N, z;
    scanf("%d", &N);

    int arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &z);  // element to search

    int count = 0;
    for(int i = 0; i < N; i++) {
        if(arr[i] == z) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}

