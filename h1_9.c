#include <stdio.h>
int main() {
    int n, i, j, sum = 0;

    printf("Enter n (square matrix size): ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < n; i++)
        sum += a[i][n - 1 - i];

    printf("Right diagonal sum: %d\n", sum);
    
    return 0;
}