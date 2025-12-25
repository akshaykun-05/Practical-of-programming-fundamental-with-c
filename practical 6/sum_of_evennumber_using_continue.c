#include <stdio.h>

int main() {
    int i, n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            continue;   // skip odd numbers
        }
        sum = sum + i;  // add only even numbers
    }

    printf("Sum of even numbers from 1 to %d = %d", n, sum);

    return 0;
}
