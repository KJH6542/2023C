#include <stdio.h>

int s(int arr[], int n, int t) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == t) {
            return i;
        }
    }
    
    return -1;
}

int main() {
    int arr[] = {2, 7, 1, 6, 9, 8, 5, 4, 10, 3};
    int n = sizeof(arr) / sizeof(int);
    int t = 4;

    int r = s(arr, n, t);
    if (r != -1) {
        printf("arr[%d]\n", r);
    } else {
        printf("N\n");
    }

    return 0;
}
