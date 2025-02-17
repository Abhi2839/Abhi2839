#include <stdio.h>

int main(){
// person can vote or not
int age;
printf("enter a age:");
scanf("%d",&age);
if(age>=18){
    printf("person can vote");
}
else{
    printf("person cannot vote");
}
printf("Thank you");
    return 0;
}