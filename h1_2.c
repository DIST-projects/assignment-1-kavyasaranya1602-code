#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Reversed array: ");
    for (i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}