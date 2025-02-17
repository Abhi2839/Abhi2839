#include <stdio.h>

int main() {
    int n = 1325;

    
    while (n > 0) {
        int digit = n % 10;
        n=n/10;   
        printf("%d ", digit);
      
    }