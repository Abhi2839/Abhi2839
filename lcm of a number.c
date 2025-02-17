#include<stdio.h>

int main(){
int a, b;
scanf("%d %d", &a,&b);

int ans=-1;
int maxm;
if(a<=b){
maxm=b;
}
else{
maxm = a;
}

int i = maxm;
while(i<=a*b){
if(i%a ==0 && i%b==0){
ans = i;
break;
}
i++;
}
printf("%d",ans);

}