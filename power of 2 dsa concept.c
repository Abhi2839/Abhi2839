
#include <stdio.h>

int main()
{
    // printf("Hello World");
int a;
scanf("%d",&a);
 if((a)&(a-1)==0 && a!=0){
     
     printf("%d is a power of 2",a);
 }
 else{
     printf("%d is not a power of 2",a);
 }

    return 0;
}

