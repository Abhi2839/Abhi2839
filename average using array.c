#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */
int main(void)
{ 
int elephantweight[]={5713, 	6936 ,	8764, 	6702, 	8535 ,	8654 ,	8710 ,	8332 ,	4948 ,	7627};
int sum=0, average;
    
    for(int i=0;i<10;i++){
        sum += elephantweight[i];
    }
    average = sum/10;
    printf("The average of elephant weight is: %d", average);

return 0;}