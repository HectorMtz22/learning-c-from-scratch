#include <stdio.h>
#define BUFFER 1000

int any(char *, char *);

int main() {
    char s1[BUFFER];
    char s2[BUFFER];

    printf("Enter a string: ");
    scanf("%s", s1);
    printf("Enter the substring: ");
    scanf("%s", s2);

    int location = any(s1, s2);

    printf("The location is %d\n", location);
    return 0;
}

int any(char s1[], char s2[]) {
    int n = 0;
    for (int i = 0; s1[i] != '\0'; i++) {
        for (int j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                return i;
            }
        }
    }
    return -1;
}