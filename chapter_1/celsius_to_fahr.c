#include <stdio.h>

int main() {
    float celsius, fahr;
    int lower, upper, step;

    lower = -50;
    upper = 150;
    step = 10;

    celsius = lower;
    printf("Celsius\t\tFahrenheit\n");
    while (celsius <= upper) {
        fahr = celsius * (9.0 / 5.0) + 32.0; printf("%5.1f\t\t%5.1f\n", celsius, fahr);
        celsius += step;
    }

    return 0;
}