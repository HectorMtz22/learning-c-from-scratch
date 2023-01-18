#include <stdio.h>
#include <string.h>

void escape(char *s, char *t);

int main() {
    char string[] = "Hola, este es un mensaje random\twith some\t tabs and \nnewlines";
    char new_string[1000];

    escape(new_string, string);

    printf("%s\n", new_string);
    return 0;
}

void escape(char s[], char t[]) {
    int length = strlen(t);
    int i = 0;
    for (int j = 0; j < length; j++) {
        switch (t[j]) {
        case '\n':
            s[i++] = '\\';
            s[i++] = 'n';
            break;

        case '\t':
            s[i++] = '\\';
            s[i++] = 't';
            break;

        default:
            s[i++] = t[j];
            break;
        }
    }
    s[i] = '\0';
}