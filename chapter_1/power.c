#include <stdio.h>

// Declares the parameter types and names, also the return
// * Its called a function prototype
int power(int, int);

int main() {
    for (int i = 0; i < 10; i++) {
        printf("%2d %3d %6d\n", i, power(2, i), power(-3, i));
    }
    return 0;
}

int power(int base, int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) {
       res *= base; 
    }
    return res;
}