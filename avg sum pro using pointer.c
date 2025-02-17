#include <stdio.h>
void  math(int a ,int b,int *sum,int *prod,int *avg);
int main()
{
    int a,b;
    int sum,prod,avg;
    scanf("%d %d",&a, &b);
    math(a, b, &sum, &prod, &avg);
    printf("Sum of two number is=%d \n",sum);
    printf("Product of two number is=%d \n",prod);
    printf("Average of two number is=%d \n",avg);
    return 0;
}
  void math(int a ,int b ,int *sum, int *prod, int *avg){
    *sum=a+b;
    *prod=a*b;
    *avg=(a+b)/2;
}