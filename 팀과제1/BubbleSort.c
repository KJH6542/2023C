#include <stdio.h>

int main() {
    int arr[] = {58, 39, 71, 10, 83, 91, 14, 27, 6, 77};
    int n = sizeof(arr) / sizeof(int);
    int t;

    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-1-i; j++) {
            if(arr[j] > arr[j+1]) {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
