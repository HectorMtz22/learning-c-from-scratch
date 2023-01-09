#include <stdio.h>
#define TAB 4

void replace_tab(void);

int main() {
    int c;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            replace_tab();
        } else {
            putchar(c);
        }
    }

}

void replace_tab(void) {
    for (int i = 0; i < TAB; i++) {
        putchar(' ');
    }
}

// IN case of getlines() function, we probably want something like this

// int replace_tab(char s[], int index) {
//     for (int i = 0; i < TAB; i++) {
//         s[index++] = ' ';
//     }
//     return index;
// }