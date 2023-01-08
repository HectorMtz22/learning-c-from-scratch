#include <stdio.h>

#define BUFFER 1024

int getlines(char *, int);

int main() {
    int len = 0;
    char line[BUFFER];
    while ((len = getlines(line, BUFFER)) > 0) {
        printf("%s\n", line);
    }
    return 0;
}


int getlines(char s[], int lim) {
    int c, i = 0, spaces = 0;

    while ((c = getchar()) != EOF && i < lim && c != '\n') {
        if (c == '\t' || c == ' ') {
            spaces++;
        } else {
            spaces = 0;
        }

        if (spaces <= 1) {
            s[i++] = c;
        }
    }
    if (c == '\n') {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}
