

#include <stdio.h>

int main()
{
  int a,i;
  scanf("%d",&a);
 for(i=2;a>=i;i++){
     while(a%i==0){
         a /=i;
     }
 }
 printf("%d",i-1);
    return 0;
}
