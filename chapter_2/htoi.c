#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define BUFFER 50

int htoi(char *);

int main() {
    char string[BUFFER];
    printf("Enter a hexadecimal value: ");
    scanf("%s", &string);
    printf("In decimal: %d\n", htoi(string));
    return 0;
}

int htoi(char s[]) {
    int j = strlen(s) - 1;
    int sum = 0;
    for (int i = 0; j >= 0; i++) {
        if ((i == 0 && s[i] == '0') || (i == 1 && s[i] == 'x')) {
            j--;
            continue;
        }
        if (s[i] - '0' > 9) {
            int new = (tolower(s[i]) - 'a') + 10; 
            sum += pow(16, j) * new;
        } else {
            sum += pow(16, j) * (s[i] - '0');
        }
        j--;
    }
    return sum;
}