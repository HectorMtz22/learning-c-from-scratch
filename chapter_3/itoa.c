#include <stdio.h>

void reverse(char *);

// itoa: convert n to characters in s
void itoa(int n, char s[]) {
    int i, sign;
    if ((sign = n) < 0) {   // record sign
        n = -n;             // making n positive
    }
    i = 0;
    do {                    // generate digits in reverse order
        s[i++] = n % 10 + '0'; 
    } while ((n /= 10) > 0);// detete it
    if (sign < 0) {
        s[i++] = '-';
    }
    s[i] = '\0';
    reverse(s);
}

int main() {
    int number = 0777;
    char string[50];

    itoa(number, string);

    printf("%s\n", string);
    return 0;
}
