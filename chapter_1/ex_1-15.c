#include <stdio.h>

float fahr_to_celsius(float);

int main() {
    float fahr, celsius;
    printf("Enter a value in Fahrenheit: ");
    scanf("%f", &fahr);

    celsius = fahr_to_celsius(fahr);

    printf("The value in Celsius is: %5.2f °C\n", celsius);
}

float fahr_to_celsius(float fahrenheit) {
    float res = 5.0/9.0 * (fahrenheit - 32);
    return res;
}