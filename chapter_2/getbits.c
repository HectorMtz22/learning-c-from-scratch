#include <stdio.h>

unsigned int getbits(unsigned, int, int);

int main() {
    unsigned x = 0777;

    printf("The result is: %u\n", getbits(x, 4, 3));

}

unsigned getbits(unsigned x, int p, int n) {
    return (x >> (p + 1 - n)) & ~(~0 << n);
}