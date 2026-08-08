#include <stdio.h>
#include <stdlib.h>
int main() {
    char *str;
    int size = 1000;
    int i, v = 0, c = 0, d = 0, s = 0;
    char ch;

    str = (char *)malloc(size * sizeof(char));

    printf("Enter a sentence: ");
    fgets(str, size, stdin);

    for (i = 0; str[i] != '\0'; i++) {
        ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                v++;
            else
                c++;
        } else if (ch >= '0' && ch <= '9') {
            d++;
        } else if (ch == ' ') {
            s++;
        }
    }

    printf("Vowels: %d\n", v);
    printf("Consonants: %d\n", c);
    printf("Digits: %d\n", d);
    printf("White spaces: %d\n", s);

    free(str);
    return 0;
}