/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,d,c=0;
    //  d=a;
    scanf("%d",&a);
    d=a;
    while(a>0){
        b=a%10;
        c=c*10+b;
        a=a/10;
    }
printf("reverse %d\n",c);
if(d!=c){
    printf("not palindrome");
}
else{
    printf("palindrome");
}
    return 0;
}
