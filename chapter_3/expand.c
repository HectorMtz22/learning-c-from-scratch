#include <stdio.h>

// expand: handle expressions like "a-z" or "0-9" in s1 and write list in s2
void expand(char s1[], char s2[]) {
    int from_to[10];
    int n = 0;
    int j = 0;
    for (int i = 0; i < 10; i++) {
        from_to[i] = 0;
    }
    for (int i = 0; s1[i] != '\0'; i++) {
        if (s1[i] == '-') continue;
        from_to[n++] = s1[i];
    }
    for (int i = 0; i < n; i += 2) {
        int c = from_to[i];
        while (c <= from_to[i + 1]) {
            s2[j++] = c;
            c++;
        }

    }
    s2[j] = '\0';
}

int main() {
    char s1[] = "a-z0-9";
    char s2[1000];
    expand(s1, s2);

    printf("%s\n", s2);
    return 0;
}