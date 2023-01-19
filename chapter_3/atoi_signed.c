#include <ctype.h>
#include <stdio.h>

// atoi: convert s to integer; version 2
int atoi(char s[]) {
    int index, n, sign;
    index = n = 0;

    // skip spaces 
    while (isspace(s[index])) {
        index++;
    }
    // collect sign 
    sign = (s[index] == '-') ? -1 : 1;
    // skip sign
    if (s[index] == '-' || s[index] == '+') index++;
    // Formula discussed on chapter 2
    while (isdigit(s[index])) {
        n = 10 * n + (s[index++] - '0');
    }
    return sign * n;
}

int main() {
    char string[] = "     -2600otracosa";
    printf("The number is: %d\n", atoi(string));
    return 0;
}