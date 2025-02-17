// You are using GCC
#include<stdio.h>
int main(){
    int i=0,len=0;
    char str[1000]="abhey";
    while(str[i]!='\0'){
        i++;
        len++;
    }
    printf("%d",len);
    for (int i=len;i>=0;i--){
        printf("%c",str[i]);
    }
}