# include <stdio.h>

/* print Fahrenheit - Celsius table
    for fahr = 0, 10, ..., 300; */

int main() {
    int fahr, celsius, lower, upper, step;
    lower = 0;
    upper = 300;
    step = 10;

    fahr = lower;
    printf("Fahrenheit\tCelsius\n");
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t\t%d\n", fahr, celsius);
        fahr += step;
    }

    return 0; // this is also a comment
}