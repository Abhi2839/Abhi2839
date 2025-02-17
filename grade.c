#include <stdio.h>

int main()
{
    int marks;
    printf("enter a marks:");
    scanf("%d",&marks);
   if (marks<30){
       printf("Grade is 'C' ");
   }
   else if (marks<70 && marks>=30){
       printf("Grade id 'B' ");
   }
   else if (marks<90 && marks>=70){
       printf("Grade is 'A+' ");
       
   }
   else{
       printf("Grade is 'A++' ");
   }
    return 0;
}