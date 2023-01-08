#include <stdio.h>
#define BUFFER 1000 

int max = 0;
char line[BUFFER];
char longest[BUFFER];

int getlines(void);
void copy(void);

int main() {
    int len = 0;
    extern int max;
    extern char longest[];

    while ((len = getlines()) > 0) {
        if (len > max) {
            max = len;
            copy();
        }
    }
    if (max > 0) {
        printf("%s\n", longest);
    }
}

int getlines(void) {
    int c, i = 0;
    extern char line[];

    while (i < BUFFER && (c = getchar()) != EOF && c != '\n') {
        line[i++] = c;
    }
    if (c == '\n') {
        line[i++] = c;
    }
    line[i] = '\0';
    return i;
}

void copy(void) {
    int i = 0;
    extern char line[], longest[];

    while ((longest[i] = line[i]) != '\0') {
        i++;
    };
}