#include <stdio.h>

int main(){
// marks
int marks;
printf("enter a marks:");
scanf("%d",&marks);
if(marks>90){
    printf("a++");
}
else if(90>marks && marks>80){
    printf("a+");
}
 else if(80>marks && marks>70){
    printf("b++");
}   
else if(70>marks && marks>60){
    printf("b+");
}
else if(60>marks && marks>50){
    printf("c++");
}
else if(50>marks && marks>40){
    printf("c");
}
else if(40>marks && marks>30){
    printf("d");
}
else{
    printf("fail");
}

    return 0;
}
