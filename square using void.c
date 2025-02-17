#include <stdio.h>
void square(int n);
int main()
{
    int number=44;
    
    printf("number=%d \n",number);
square(number);
    return 0;
}
// call by value
void square(int n){
    n =n*n;
    printf("square=%d \n",n);
}