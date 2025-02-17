#include <stdio.h>
int set(int a,int b){
    int value=a|(1<<b);
    return value;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int result=set(a,b);
    printf("%d",result);
}
 
//  can be done by without using function