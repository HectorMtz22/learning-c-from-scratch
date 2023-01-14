#include <stdio.h>
#define BUFFER 1000

void squeeze(char *, char *);

int main() {
    char s1[BUFFER];
    char s2[BUFFER];

    printf("Enter a string: ");
    scanf("%s", s1);
    printf("Enter the substring: ");
    scanf("%s", s2);

    squeeze(s1, s2);

    printf("The final result is: %s\n", s1);
    return 0;
}

void squeeze(char s1[], char s2[]) {
    int n = 0;
    for (int i = 0; s1[i] != '\0'; i++) {
        int will_be_eliminated = 0;
        for (int j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                will_be_eliminated = 1;
                break;
            }
        }
        if (will_be_eliminated == 0) {
            s1[n++] = s1[i];
        }
    }
    s1[n] = '\0';
}