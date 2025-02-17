

#include <stdio.h>

int main()
{
   int a,count=0,b=1;
   scanf("%d",&a);
   int i=1;
   while(i<a){
       if(a%i==0){
        //   count++; //to count 
        //   printf("%d\n",i);  // to print factor
         b=i;   // for largest factor
        }
       i++;
   }
// printf("%d",count);
printf("%d",b);
    return 0;
}
