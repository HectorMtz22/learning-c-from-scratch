#include <stdio.h>

// If we want only a line, we could write:
/*
    int c;
    while ((c = getchar()) != EOF  && c != '\n')
*/

int main() {
    long nc = 0;
    int c;
    while ((c = getchar()) != EOF) {
        if (c == '\n') continue; // I add this to remove enters counted as characters
        ++nc;
    }

    
    printf("%ld\n", nc);
    return 0;
}