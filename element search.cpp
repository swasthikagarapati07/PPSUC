#include <stdio.h>

int main() {
    int N, z;
    scanf("%d", &N);

    int arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &z);  // element to search

    int found = 0;
    for(int i = 0; i < N; i++) {
        if(arr[i] == z) {
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

