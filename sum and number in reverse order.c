#include <stdio.h>

int main()
{
   
  int n;
  printf("enter a number:");
  scanf("%d",&n);
  
  int sum=0;
  for (int i =1,j=n;n>=i,j>=1;i++,j--){
      sum=sum+i;
      printf("%d \n",j);    // output first number in reverse order
  }
printf("%d \n",sum);
    return 0;
}