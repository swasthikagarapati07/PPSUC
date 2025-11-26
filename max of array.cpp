#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    int max;
    
    // Read first element and assume it as max
    scanf("%d", &arr[0]);
    max = arr[0];

    // Read remaining elements
    for(int i = 1; i < N; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("%d", max);
    return 0;
}

