#include <stdio.h>
int main() {
    int arr[100], n, i, j, c;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Unique elements: ");
    for (i = 0; i < n; i++) {
        c = 0;
        for (j = 0; j < n; j++)
            if (arr[i] == arr[j])
                c++;
        if (c == 1)
            printf("%d ", arr[i]);
    }

    printf("\n");
    
    return 0;
}