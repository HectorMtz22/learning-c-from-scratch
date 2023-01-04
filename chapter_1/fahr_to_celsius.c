# include <stdio.h>

/* print Fahrenheit - Celsius table with float values
    for fahr = 0, 10, ..., 300; */

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 10;

    fahr = lower;
    printf("Fahrenheit\tCelsius\n");
    while (fahr <= upper) {
        celsius = 5.0/ 9 * (fahr - 32); // We are doing division last to avoid truncation, i.e. 5/9 = 0 and 5.0/9 = 0.5555
        printf("%3.0f\t\t%6.1f\n", fahr, celsius);
        fahr += step;
    }

    return 0; // this is also a comment
}