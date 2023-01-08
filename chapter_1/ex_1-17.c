// Write a program to print all input lines that are longer than 80 characters
#include <stdio.h>
#define BUFFER 1000

int getlines(char *, int);

int main() {
    int len;
    char line[BUFFER];
    while ((len = getlines(line, BUFFER)) > 0) {
        if (len > 80) {
            printf("%s\n", line);
        }

    }


    return 0;
}

int getlines(char s[], int lim) {
    int c, i = 0;

    while ((c = getchar()) != EOF && i < lim && c != '\n') {
        s[i++] = c;
    }
    if (c == '\n') {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}