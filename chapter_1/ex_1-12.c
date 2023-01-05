#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int state, c, spaces;

    state = OUT;

    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == ' ' || c == '\t') {
            spaces++;
            state = OUT;
        }
        else if (state == OUT) {
            state = IN;
            spaces = 0;
        };

        if (state == IN) putchar(c);
        if (state == OUT && spaces <= 1) putchar('\n'); // Only allow 1 space


    }
    return 0;
}