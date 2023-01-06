#include <stdio.h>

#define LENGTH 1024

int main() {
    int characters[LENGTH];
    int c;

    // initialize array
    for (int i = 0; i < LENGTH; i++) {
        characters[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == ' ' || c == '\t') {
            continue;
        }
        characters[c]++;
    }

    // Print Histogram
    printf("\nHistogram\n----------------------\n");
    for (int i = 0; i < LENGTH; i++) {
        if (characters[i] == 0) {
            continue;
        }
        printf("%c ", i);
        for (int j = 0; j < characters[i]; j++) {
            printf("-");
        }
        printf("\n");
    }
    return 0;
}