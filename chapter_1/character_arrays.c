#include <stdio.h>
#define BUFFER 1000

// I changed the name because it makes a confict with getline() defined in stdio.h
int getlines(char line[], int maxline);
void copy(char to[], char from[]);

// A loop that compares line by line and stores the max 
int main() {
    int len;                // current line length
    int max;                // maximum length seen so far
    char line[BUFFER];      // current input line
    char longest[BUFFER];   // longest line saved

    max = 0;
    while((len = getlines(line, BUFFER)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) {
        printf("\nTotal characters on the line: %d\n%s\n", max, longest);
    }
    return 0;
}

// We store char by char until a newline comes in
int getlines(char *s, int lim) {
    int c, i = 0;
    while((c = getchar()) != EOF && i < lim && c != '\n') {
        s[i++] = c;
    }
    if (c == '\n') {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}

// Copy current line in the maximum line
void copy(char to[], char from[]) {
    int i = 0;
    while((to[i] = from[i]) != '\0') {
        ++i;
    }
}