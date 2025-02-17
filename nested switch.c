#include<stdio.h>
int main(){
    int number;
    printf("Enter a number:\n");
    scanf("%d",&number);
    if (number>=0){
        printf("positive number \n");
    if (number%2==0){
        printf("even positive number \n");}
    else{
        printf("odd positive number \n"); }
}
else{printf("negative number \n");
        
    }
   return 0 ; 
}
