#include <stdio.h>
int main(){
    int r,n,s=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
printf("reverse of number=%d",s);
    
}