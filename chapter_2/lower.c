#include <stdio.h>
#include <string.h>
#define BUFFER 1000

int lower(int c);

int main() {
    char line[BUFFER];

    printf("Write a string in UPPERCASE: ");
    scanf("%s", &line);

    int n = strlen(line);

    for (int i = 0; i < n; i++) {
        line[i] = lower(line[i]);
    }
    
    printf("\nThe same string in lowercase is: %s\n", line);
    return 0;
}

int lower(int c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 'a' - 'A';
    }
    else return c;
}