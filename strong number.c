#include <stdio.h>
int str1(int num){
int fact=1;
for(int i=1;num>=i;i++){fact=fact*i;}
return fact;
}
int main() {
    long long int num;
    int original, sum = 0;

    scanf("%lld", &num);

    original = num;
    while (num > 0) {
        int digit = num % 10;
        sum=sum+str1(digit);
        num /= 10;
        
    }
    if (sum == original) {
        printf("%d is a strong number.\n", original);
    } else {
        printf("%d is not a strong number.\n", original);
    }

    return 0;
}