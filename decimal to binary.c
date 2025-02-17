#include <stdio.h>
int main()
{
   int a,b,c=0,i=1,num=0;
   scanf("%d",&a);
b=a; // init bcoz value of a changes in the loop
while(a!=0){
    c=a%2;  // to find rem
    num=num+c*i; //to binary num
    a=a/2; //divide by 2 
    i=i*10;// after every iteration i is multiple by 10
    
}
  printf("Binary of %d is:%d",b,num);
    return 0;
}
