#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int a = 6, b = 4;
    int (*funcPtr)(int, int);

    funcPtr = add;
    printf("Using function pointer, add: %d\n", funcPtr(a, b));

    funcPtr = multiply;
    printf("Using function pointer, multiply: %d\n", funcPtr(a, b));

    return 0;
}
