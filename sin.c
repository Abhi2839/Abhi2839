
#include <stdio.h>
#include <math.h>

int main() {
    double x;

    printf("Enter a value for x between 0 and 1: ");
    scanf("%lf", &x);

    
    if (x >= 0 && x <= 1) {
        double a = sin(x);
        double b = cos(x);
        // printf("The cos of %.2lf is: %.2lf\n", x, b");
        printf("The sine of %.2lf is: %.2lf\n", x, a);
    } 
    else {
        printf("Please enter a value for x between 0 and 1.\n");
    }

    return 0;
    }
