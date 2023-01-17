#include <stdio.h>
#include <math.h>

int main() {
    int n = 3;
    ++n;
    printf("%d %.0f\n", n, pow(2, n));
    // printf("%d %.0f\n", ++n, pow(2, n));
    return 0;
}