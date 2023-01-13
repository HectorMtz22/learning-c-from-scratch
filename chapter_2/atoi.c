#include <stdio.h>
#include <string.h>
#define BUFFER 1000

int atoi(char*);
void copy_string(char from[], char to[]);
void tables(int);

int main(int argc, char **argv) {
    char string[BUFFER];
    if (argc >= 2) {
        copy_string(argv[1], string);
    } else {
        printf("Enter a number: \n");
        scanf("%s", &string);
    }

    int number = atoi(string);
    tables(number);

    printf("You see!, we converted the string\n");
    return 0;
}

int atoi(char s[]) {
    int n = 0;

    for (int i = 0; s[i] >= '0' && s[i] <= '9'; i++) {
        n = 10 * n + (s[i] - '0');
    }
    return n;
}

void copy_string(char from[], char to[]) {
    int c;
    int n = strlen(from);
    for (int i = 0; i < n; i++) {
        to[i] = from[i];
    }
}

void tables(int number) {
    for (int i = 0; i < 10; i++) {
        printf("%5d * %5d = %10d\n", i, number, i * number);
    }
}