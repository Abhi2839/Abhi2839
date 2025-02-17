#include<stdio.h>

int main()
{
   int n=50;
   for (int i=5;i<=n;i=i+2){
       if (i%2==0){continue;}
       printf("%d \n",i);
   }
    
    
    return 0 ;
}



//method 2


#include<stdio.h>

int main()
{
   int n=50;
   for (int i=5;i<=n;i=i+2){
       if (i%2!=0){
       printf("%d \n",i);
   }}
    
    
    return 0 ;
}