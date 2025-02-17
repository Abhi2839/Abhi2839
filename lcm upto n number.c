#include <stdio.h>

// Function to calculate the GCD (Greatest Common Divisor)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate the LCM (Least Common Multiple)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int n;

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    int result = 1;

    for (int i = 2; i <= n; i++) {
        result = lcm(result, i);
    }

    printf("LCM of numbers up to %d is: %d\n", n, result);

    return 0;
}
