#include <stdio.h>

int getMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void countingSort(int arr[], int n, int exp) {
    int output[n];
    int count[10] = {0};

    for (int i = 0; i < n; i++) {
        count[(arr[i] / exp) % 10]++;
    }
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }
    for (int i = n - 1; i >= 0; i--) {
        int digit = (arr[i] / exp) % 10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

void radixSort(int arr[], int n) {
    int max = getMax(arr, n);
    for (int exp = 1; max / exp > 0; exp *= 10) {
        countingSort(arr, n, exp);
    }
}

int main() {
    int n;

    printf("Enter number of negative integers: ");
    scanf("%d", &n);

    int arr[n], absArr[n];

    printf("Enter %d negative numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        absArr[i] = -arr[i];  
    }
    radixSort(absArr, n);

    printf("Sorted negative numbers: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", -absArr[i]);
    }
    printf("\n");

    return 0;
}
