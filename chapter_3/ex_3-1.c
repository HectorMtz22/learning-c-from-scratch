#include <stdio.h>

int binsearch(int x, int *v, int n);

int main() {
    int n = 5;
    int numbers[] = {0, 5, 10, 15, 16};
    int find = 5;

    printf("%d\n", binsearch(find, numbers, n));


    return 0;
}

int binsearch(int x, int v[], int n) {
    int low, high, mid;

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2; // flooring
        if (x != v[mid]) {
            x > v[mid] ? (low = mid) : (high = mid);
        } else {
            return mid; // Found match
        }
    }
    return -1;
}