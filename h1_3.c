#include <stdio.h>
int main() {
    int arr[100], n, i, j, c = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 1; i < n; i++) {
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                c++;
                break;
            }
        }
    }
    
    printf("Total duplicate elements: %d\n", c);

    return 0;
}