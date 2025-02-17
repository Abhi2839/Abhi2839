#include<stdio.h>

int main(){
int a, b;
scanf("%d %d", &a,&b);
int i =1; int ans=0; int minm;
if(a<=b){
minm = a;
}
else{
minm = b;
}
while(i<=minm){
if(a%i == 0 && b%i ==0){
ans = i;
}
i++;
}
printf("%d",ans);



}