/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int time(int s){
    int h,m;
    h=s/3600;  // no of hours
    s %=3600; //seconds
    m= s/60; //minutes
    s %=60; //seconds
printf("%02d:%02d:%02d",h,m,s);
    
}

int main()
{
    int a;
    scanf("%d",&a);
    
time(a);

    return 0;
}
