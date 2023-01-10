#include <stdio.h>
#define BUFFER 50

int main() {
    int c;
    int buffer[BUFFER];
    int depth = 0;
    int error = 0;

    while ((c = getchar()) != EOF) {
        switch (c) {
            case '[':
                buffer[depth++] = ']';
                break;
            
            case '{':
                buffer[depth++] = '}';
                break;
            
            case '(':
                buffer[depth++] = ')';
                break;

            case ')': 
                if (buffer[--depth] != ')') {
                    error = 1;
                }
                break;
            
            case '}':
                if (buffer[--depth] != '}') {
                    error = 1;
                }
                break;
        
            case ']':
                if (buffer[--depth] != ']') {
                    error = 1;
                }
                break;
        
            default:
                break;
        }
        putchar(c);
    }

    if (error != 0 || depth != 0) {
        printf("Unmatched: syntax error\n");
    }


    return 0;
}
