#include <stdio.h>
// state if we are in a comment
#define IN 1
#define OUT 0
#define BLOCK_COMMENT 1
#define INLINE_COMMENT 2

int main() {
    int c; 
    int state = OUT;
    int chars_for_comment = 0;
    int type_of_comment = 0;
    int inside_string = OUT;

    while ((c = getchar()) != EOF) {
        if (inside_string == IN) {
            if (c == '"' || c == '\'') {
                putchar(c);
                inside_string = OUT;
                continue;
            }
            putchar(c);
            continue;
        }
        if (state == OUT) {
            if (c == '"' || c == '\'') {
                inside_string = IN;
                putchar(c);
                continue;
            }
            if (c == '/') {
                chars_for_comment++;
                if (chars_for_comment == 2) {
                    type_of_comment = INLINE_COMMENT;
                    state = IN;
                    chars_for_comment = 0;
                }
                continue;
            } else if (c == '*' && chars_for_comment == 1) {
                type_of_comment = BLOCK_COMMENT;
                state = IN;
                chars_for_comment = 0;
                continue;
            } else {
                chars_for_comment = 0;
            }
        } else if (state == IN) {
            if (type_of_comment == INLINE_COMMENT) {
                if (c == '\n') {
                    putchar(c);
                    state = OUT;
                } else {
                    continue;
                }
            } else {
                if (c == '*' && chars_for_comment == 0) {
                    chars_for_comment++;
                } else if (c == '/' && chars_for_comment == 1) {
                    chars_for_comment = 0;
                    state = OUT;
                    continue;
                }
            }
        }
        putchar(c);
    }
}
