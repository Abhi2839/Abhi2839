#include <stdio.h>

int main() {
    int a, b, c;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Find the second-largest number
    int secondMax;

    if ((a >= b && a <= c) || (a >= c && a <= b))
        secondMax = a;
    else if ((b >= a && b <= c) || (b >= c && b <= a))
        secondMax = b;
    else
        secondMax = c;

    // Output the result
    printf("The second-largest number is: %d\n", secondMax);

    return 0;
}
