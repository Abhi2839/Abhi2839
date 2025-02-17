#include <stdio.h>
int main()
{
   int a; // upto which fibonaci series  is required
   scanf("%d",&a);
   int b=0,c=1,d;
   printf("first number i.e zero:%d\n",b);
   printf("second number i.e one:%d\n",c);
   printf("fibonaci series: ");
   for(int i=1;a>=i;i++){
    printf("%d\t",b);
       d=b+c;
       b=c; //first term (0)==second term(1)
       c=d; // second term(1)==sum of first and second term
      }
//   printf(" last  term %d\n",b);
printf("\n");
  printf("sum: %d",d);
    return 0;
}
