#include <stdio.h>
#include <stdlib.h>

struct Item {
    int id;
    float price;
};

int main() {
    int n;
    printf("Enter number of items: ");
    scanf("%d", &n);

    struct Item *ptr = (struct Item *)malloc(n * sizeof(struct Item));
    
    for (int i = 0; i < n; i++) {
        printf("Enter id and price for item %d: ", i + 1);
        scanf("%d %f", &((ptr + i)->id), &((ptr + i)->price));
    }

    for (int i = 0; i < n; i++) {
        (ptr + i)->price = (ptr + i)->price * 1.10;
    }

    printf("Items after 10%% price increase:\n");
    for (int i = 0; i < n; i++) {
        printf("Id: %d, Price: %.2f\n", (ptr + i)->id, (ptr + i)->price);
    }

    free(ptr);
    return 0;
}
