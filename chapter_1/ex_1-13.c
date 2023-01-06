#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int length_of_word[25], c;
    int state = OUT;

    // Initializating the array
    for (int i = 0; i < 25; i++) {
        length_of_word[i] = 0;
    }

    int count = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == '\t' || c == ' ') {
            state = OUT;
            length_of_word[count]++;
            count = 0;
        } else {
            state = IN;
            count++;
        }
    }

    printf("\nHistogram\n-------------------------------------------\n");
    for (int i = 1; i < 25; i++) {
        printf("%5d ", i);
        for (int j = 0; j < length_of_word[i]; j++) {
            printf("-");
        }
        printf("\n");
    }

    return 0;
}