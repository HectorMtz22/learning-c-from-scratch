#include <stdio.h>

#define IN 1 // Inside a word
#define OUT 0 // Outside a word 

int main() {
    int count, c, newlines, characters, state;

    state = OUT;
    count = newlines = characters = 0;

    while ((c = getchar()) != EOF) {
        ++characters;
        if (c == '\n') ++newlines;

        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            count++;
        }
    }

    printf("\nThere are:\n%d Words\n%d Lines\n%d Characters\n", count, newlines, characters);

}