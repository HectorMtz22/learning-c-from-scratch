#include <stdio.h>
#define BUFFER 1000

int getlines(char *, int);
void reverse_string(char *, char *, int);

int main() {
    int len = 0;
    char line[BUFFER];

    while ((len = getlines(line, BUFFER)) > 0) {
        char reversed[len + 2];
        reverse_string(line, reversed, len);
        printf("%s\n", reversed);
    }
    return 0;
}

int getlines(char s[], int lim) {
    int c, i = 0;
    while ((c = getchar()) != EOF && c != '\n' && i < lim) {
        s[i++] = c;
    }
    return i;
}

void reverse_string(char from[], char to[], int len) {
    int i = 0;
    int j = len;
    
    while (i <= len) {
        to[i++] = from[--j];
    }
    to[i++] = '\n';
    to[i] = '\0';
}