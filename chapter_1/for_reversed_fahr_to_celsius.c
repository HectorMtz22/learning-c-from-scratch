#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
    printf("Celsius\tFahrenheit\n");
    for (int i = UPPER; i >= LOWER; i -= STEP) {
        float calculation = (5.0/9) * (i - 32);
        printf("%3d\t%6.1f\n", i, calculation);
    }

    return 0;
}