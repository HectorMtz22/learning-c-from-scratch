#include <stdio.h>

int main() {
    int spaces = 0;
    int c;

    while ((c = getchar()) != EOF) {
        if (c == ' ') spaces++;
        if (c != ' ') spaces = 0;

        if (spaces <= 1) putchar(c);
    }
    return 0;
}