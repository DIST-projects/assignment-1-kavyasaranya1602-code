#include <stdio.h>
#include <string.h>
int main() {
    char arr[100][100], temp[100];
    int n, i, j;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter %d strings:\n", n);
    for (i = 0; i < n; i++)
        scanf("%s", arr[i]);

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
    printf("Sorted strings:\n");
    for (i = 0; i < n; i++)
        printf("%s\n", arr[i]);
        
    return 0;
}