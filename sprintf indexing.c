

#include <stdio.h>
#include<string.h>
int main()
{
   char a[100];
   sprintf(a,"HELLO");
   int b=strlen(a);
   for(int i=0;b>i;i++){
    printf("a[%d]=%c\n",i,a[i]);   
   }

    return 0;
}
