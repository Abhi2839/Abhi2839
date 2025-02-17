#include <stdio.h>

int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int sum=0;
    
    
    for (int i=1;i<=n;i++){
        sum=sum+i;
       
    }
    
     printf("sum of number %d:",sum);

    //  int a=5,b=1,c=0;

    // while(a>=b){
        
    //     c =c+b++;
        
    // }
    // printf("%d",c);

    // n(n+1)/2
    return 0;
}