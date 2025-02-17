
#include <stdio.h>

int main()
{
    int marks;
    printf("enter a marks:");
    scanf("%d",&marks);
    //printf("Hello World");
if (marks>30 && marks<100){
    printf("pass \n");}
else if (marks<30){
    printf("failed \n");}
else{
    printf("wrong intput");
    }
     // using ternary
   //marks>30 ? printf("pass \n") : printf("failed \n");
    
    return 0;
}