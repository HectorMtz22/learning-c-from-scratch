#include <stdio.h>

int main() {
    int c;
    long count = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n') count++;
    }

    printf("\nWe have %ld lines\n", count);
    return 0;
}