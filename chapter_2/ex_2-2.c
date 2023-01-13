#include <stdio.h>

int getlines(char *, int);

int main() {
    int length, i = 0;
    int lim = 1000;
    char s[lim];

    while ((length = getlines(s, lim)) > 0) {
        printf("%s\nYou have %d characters.\n", s, length);
    }


    printf("%s\n", s);
    return 0;
}

int getlines(char s[], int lim) {
    int c, i = 0;
    while ((c = getchar()) != '\n' && c != EOF && i < lim - 1) {
        s[i++] = c;
    }
    if (c == '\n') s[i++] = '\n';
    s[i] = '\0';
    return i;
}