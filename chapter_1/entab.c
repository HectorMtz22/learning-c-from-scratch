#include <stdio.h>
#include <math.h>
#define TAB 4

void replace_blanks(int blanks);

int main() {
    int c, blanks = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            blanks++;
        } else {
            replace_blanks(blanks);
            blanks = 0;
            putchar(c);
        }

    }

}

void replace_blanks(int blanks) {
    double op = (0.0 + blanks) / TAB;
    int tabs = ceil(op);
    for (int i = 0; i < tabs; i++) {
        putchar('\t');
    }
}