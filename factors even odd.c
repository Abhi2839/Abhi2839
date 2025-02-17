#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("Factors of %d : ",a);
    for (int i =1;a>=i;i++){
        if(a%i==0){
            printf("%d ",i);
        }
    }
printf("\nOdd Factors: ");
for(int i=1;a>=i;i++){
    if(a%i==0){
        
    
    if(i%2!=0){
        printf("%d ",i);
    }
}
    
}
 
 printf("\nEven Factors: ");
 int check=0;
 for (int i=1;a>=i;i++){
     if(a%i==0){
         if(i%2==0){
             printf("%d ",i);
             check =1;
         }
         
     }
     }
 if(!check){
     printf("unavaiable");
 }
    return 0;
}
