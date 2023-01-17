#include <stdio.h> // printf, scanf
#include <string.h> // strlen
#define BUFFER 1000

int lower(int c) {
    return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;
}

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