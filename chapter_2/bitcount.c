#include <stdio.h>

int bitcount (unsigned x) {
    int b = 0;

    while (x != 0) {
        if (x & 01) b++;
        x >>= 1;
    }

    return b;
}

int main () {
    int x = 0777;

    printf("The number %d has %d bits in 1\n", x, bitcount(x));
    return 0;
}