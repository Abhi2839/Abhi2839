#include <stdio.h>
// #include<climits>
int main()
{
   int n=5,i;
   int arr[5]={5,8,79,4,1};
   int max=arr[0]; // int max=INT_MIN
   int min=arr[0] ;  //INT_MAX
   for (int i=1;n>i;i++){
       if(arr[i]>max){
           max=arr[i];
           
       } 
      } printf("%d ",max);
      
      
       for (int i=1;n>i;i++){
       if(arr[i]<min){
              min=arr[i];
       }}
 printf("%d ",min);

    return 0;
}

