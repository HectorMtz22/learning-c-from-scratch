#include <stdio.h>

int strlen(char *);

int main() {
    char string[] = "Hola, esto es un string constant!";
    printf("The length of string \"%s\" is: %d\n", string, strlen(string));
    return 0;
}

int strlen(char s[]) {
    int i;

    while (s[i] != '\0') {
        i++;
    }

    return i;
}