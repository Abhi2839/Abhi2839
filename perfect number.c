#include<stdio.h>
#include<math.h>
int main()
{
   int a,b;
   scanf("%d",&a);
   int x=floor(log10(a))+1;
  for(int i=1;a>=i;i++){
    int b=a%10; 
    a=a/10;
  }
printf("%d\n",x);
   if(b==a){
       printf("Perfect number");
   }
   else{
       printf("not a perfect number");
   }
    return 0;
}
