#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <math.h>

int main() {
    printf("char\t|   signed: %20d, %d\n", CHAR_MIN, CHAR_MAX);
    printf("char\t| unsigned: %20d, %.0f\n", 0, pow(2, CHAR_BIT) - 1); // 1st way: Calculating bits
    printf("short\t|   signed: %20d, %d\n", SHRT_MIN, SHRT_MAX);
    printf("short\t| unsigned: %20d, %d\n", 0, SHRT_MAX - SHRT_MIN); // 2nd way: Using the signed limits
    printf("int\t|   signed: %20d, %d\n", INT_MIN, INT_MAX);
    printf("int\t| unsigned: %20d, %u\n", 0, UINT_MAX); // 3rd way: directly put the values of unsigned variable
    printf("long\t|   signed: %20ld, %ld\n", LONG_MIN, LONG_MAX);
    printf("long\t| unsigned: %20d, %lu\n", 0, ULONG_MAX); // 3rd way: directly put the values of unsigned variable
    return 0;
}