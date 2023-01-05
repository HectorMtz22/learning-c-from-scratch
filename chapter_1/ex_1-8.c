#include <stdio.h>

int main() {
    int spaces, tabs, newlines;
    spaces = 0;
    tabs = 0;
    newlines = 0;

    int c;
    while ((c = getchar()) != EOF) {
        switch (c)
        {
        case ' ':
            spaces++;
            break;
        case '\n':
            newlines++;
            break;
        case '\t':
            tabs++;
            break;
        
        default:
            break;
        }

    }
    

    printf("\nThere are:\n%d spaces\n%d tabs\n%d newlines\n", spaces, tabs, newlines);

    return 0;
}