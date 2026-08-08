#include <stdio.h>
#include <stdlib.h>
int main() {
    char *str;
    int size = 100;
    int i, count = 0;

    str = (char *)malloc(size * sizeof(char));

    printf("Enter a sentence: ");
    fgets(str, size, stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0' && str[i + 1] != '\n')
            count++;
    }
    if (str[0] != '\0' && str[0] != '\n')
        count++;

    printf("Number of words: %d\n", count);

    free(str);
    return 0;
}