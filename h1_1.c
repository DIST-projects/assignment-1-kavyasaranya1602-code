#include <stdio.h>

int main() {
    int r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int x[r][c], y[r][c], z[r][c];  

    printf("Enter elements of matrix A:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &x[i][j]);

    printf("Enter elements of matrix B:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &y[i][j]);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            z[i][j] = x[i][j] + y[i][j];

    printf("Sum matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++)
            printf("%d ", z[i][j]);
        printf("\n");
    }

    return 0;
}
