#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int d=0;
    if(a>b && a>c){
        printf("%d",a);
        d++;
    }
    if(b>a && b>c){
        printf("%d",b);
        d++;
    }
  if(c>a&&c>d){
        printf("%d",c);
        d++;
    }
    printf(" max %d",d);
    }