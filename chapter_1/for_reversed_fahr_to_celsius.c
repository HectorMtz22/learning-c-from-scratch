#include <stdio.h>

int main() {
    printf("Celsius\tFahrenheit\n");
    for (int i = 300; i >= 0; i -= 20) {
        float calculation = (5.0/9) * (i - 32);
        printf("%3d\t%6.1f\n", i, calculation);
    }

    return 0;
}