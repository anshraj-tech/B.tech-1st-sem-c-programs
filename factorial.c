#include <stdio.h>

// Day 3: Factorial Program - BEU B.Tech 1st Sem
// Author: anshraj-tech

int main() {
    int n, i;
    long long fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of negative number not defined\n");
    } else {
        for (i = 1; i <= n; i++) {
            fact = fact * i;
        }
        printf("Factorial of %d = %lld\n", n, fact);
    }
    return 0;
}
