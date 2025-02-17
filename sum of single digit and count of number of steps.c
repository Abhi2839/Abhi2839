#include <stdio.h>

int main() {
    int num,steps=0;
 // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);  // Keep calculating sum until it becomes a single digit
    while (num >= 10) {
        int temp = 0;
 // Calculate sum of digits
        while (num > 0) {
            temp += num % 10;
           num/= 10;
        }
 // Update sum and increment steps
       num = temp;
        steps++;
    }
  // Print the final sum and number of steps
    printf("Final Sum: %d\n", num);
    printf("Number of Steps: %d\n", steps);
  return 0;
}

