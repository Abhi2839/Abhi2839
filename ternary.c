#include<stdio.h>
int main(){
    int age;
    printf("enter a age:");
    scanf("%d",&age);
    age>=18?printf("can drive car"):printf("cannot drive a car");
    return 0 ;
}
//condition?statement:statement2;