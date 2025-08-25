#include <stdio.h>
int main() {
    int n, arr[50];
    printf("Enter the limit: ");
    scanf("%d", &n);
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    for (int i = n - 1; i >= 0; i--) {
        printf("%d\t", arr[i]);
    }

    return 0;
}
