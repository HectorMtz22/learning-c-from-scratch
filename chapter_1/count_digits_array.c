#include <stdio.h>

// Count digits, white space, others
int main() {
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;

    while((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            ++ndigit[c-'0'];
        } else if (c == ' ' || c == '\n' || c == '\t') {
            ++nwhite;
        } else {
            ++nother;
        }
    }

    printf("Digits =");
    for (i = 0; i < 10; i++) {
        printf(" %d", ndigit[i]);
    }
    printf(", white space = %d, other = %d\n", nwhite, nother);
    return 0;
}

/*
    * NOTE: in the code above, we use in line 12:
    ? c - '0'
    * This means that variable c stores the numeric value of the character i.e ASCII 
    * If you want to use the number for the array, we must make this substraction.
    * 0 = 48
    * 1 = 49
    * etc...
    * if input is 0, we store 48
    * Read more: https://www.quora.com/What-is-the-role-of-c-0-in-the-following-C-source-code
*/