#include <stdio.h>
#define BUFFER 1000

void my_strcat(char *, char *);

int main() {
    char first[BUFFER];
    char second[BUFFER];
    printf("Enter the first string: ");
    scanf("%s", first);
    printf("Enter the second string: ");
    scanf("%s", second);

    my_strcat(first, second);
    printf("The result is: %s\n", first);
    return 0;
}


void my_strcat(char s[], char t[]) {
    int i, j;
    i = j = 0;
    // Count the characters of the first string
    while (s[i] != '\0') {
        i++;
    }
    // Copy the second string
    while ((s[i++] = t[j++]) != '\0')
        ;
}