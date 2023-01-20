#include <stdio.h>

void reverse(char *);

// itob: convert n to characters in s with base b
void itob(int n, char s[], int b) {
    int i, sign;
    if ((sign = n) < 0) {   // record sign
        n = -n;             // making n positive
    }
    i = 0;
    do {                    // generate digits in reverse order
        s[i++] = n % b + '0'; 
    } while ((n /= b) > 0);// detete it
    if (sign < 0) {
        s[i++] = '-';
    }
    s[i] = '\0';
    reverse(s);
}

int main() {
    int number = 0777;
    char string[50];

    itob(number, string, 8);

    printf("%s\n", string);
    return 0;
}

