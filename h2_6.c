#include <stdio.h>

int main() {
    int num = 25;
    int *ptr = &num;
    int **dptr = &ptr;

    printf("Value of num  = %d\n", num);
    printf("Address of num = %p\n", (void *)&num);

    printf("Value of ptr = %p\n", (void *)ptr);
    printf("Value pointed to by ptr = %d\n", *ptr);
    printf("Address of ptr = %p\n", (void *)&ptr);

    printf("Value of dptr = %p\n", (void *)dptr);
    printf("Value pointed to by dptr = %p\n", (void *)*dptr);
    printf("Value pointed to by *dptr = %d\n", **dptr);
    printf("Address of dptr = %p\n", (void *)&dptr);

    return 0;
}
