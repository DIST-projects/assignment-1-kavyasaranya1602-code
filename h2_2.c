#include <stdio.h>

int stringLen(char *str) {
    int count = 0;
    while (*(str + count) != '\0') {
        count++;
    }
    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    printf("Length of string = %d\n", stringLen(str));

    return 0;
}
