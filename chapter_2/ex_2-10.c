#include <stdio.h> // printf, scanf
#define BUFFER 1000

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