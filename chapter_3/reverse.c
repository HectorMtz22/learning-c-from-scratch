#include <stdio.h>
#include <string.h>

// reverse: reverse string s in place
void reverse(char s[]) {
    int c, i, j;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

int main() {
    int string[1000];
    printf("Enter a string: ");
    scanf("%s", string);

    reverse((char *) string);

    printf("The string reversed is: %s\n", string);
    
    return 0;
}