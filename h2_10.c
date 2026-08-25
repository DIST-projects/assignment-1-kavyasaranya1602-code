#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int src[n], dest[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &src[i]);
    }

    int *sptr = src;
    int *dptr = dest;

    for (int i = 0; i < n; i++) {
        *(dptr + i) = *(sptr + i);
    }

    printf("Copied array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(dptr + i));
    }
    printf("\n");

    return 0;
}
