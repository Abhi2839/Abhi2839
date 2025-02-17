/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,sum=0;//b=digits 
    scanf("%d",&a);
    while(a>0){
        b=a%10;
        a=a/10;
        sum=sum+b*b;
    }
printf("%d",sum);
    return 0;
}
