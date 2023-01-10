#include <stdio.h>
#define MAXLINE 50 // This is the value that a line would break
#define IN 1
#define OUT 0

int is_blank(int c);

int main() {
    int c, count = 0;

    while ((c = getchar()) != EOF) {
        count++;
        if (count >= 50 && is_blank(c)) {
            putchar('\n');
            count = 0;
        } else if (c == '\n') {
            count = 0;
            putchar(c);
        } else {
            putchar(c);
        }
    }

}

int is_blank(int c) {
    if (c == ' ' || c == '\t') {
        return IN;
    }
    return OUT;
}