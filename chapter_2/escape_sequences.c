#include <stdio.h>

#define VTAB '\xb' // ASCII vertical tab
#define BELL '\x7' // ASCII bell char

int main() {
    printf("Vertical tab: %c another thing\n", VTAB);
    printf("Horizontal tab: \t new thing\n");
    printf("Carriage return: \rReplace \n");
    printf("Bell: \a %c new thing\n", BELL);
    printf("Null char: \0 yes!\n");

    return 0;
}