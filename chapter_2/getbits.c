#include <stdio.h>
#define BITS 16

unsigned int getbits(unsigned, int, int);

void print_bits(unsigned number) {
    int i = BITS - 1;
    int bits[BITS];

    for (int i = 0; i < BITS; i++) {
        bits[i] = 0;
    }

    while (number >= 2) {
        bits[i--] = number % 2;
        number /= 2;
    }
    bits[i--] = 1;

    for (int i = 0; i < BITS; i++) {
        printf("%d", bits[i]);
        if (i == 7) printf(" ");
    }
} 

int main() {
    unsigned x = 16;

    printf("Number %d in bits: ", x);
    print_bits(x);
    printf("\nThe result is: %u\n", getbits(x, 4, 3));

}

unsigned getbits(unsigned x, int p, int n) {
    return (x >> (p + 1 - n)) & ~(~0 << n);
}