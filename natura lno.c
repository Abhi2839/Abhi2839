
#include <stdio.h>

int main()
{
  int number;
  printf("Enter a number:");
  scanf("%d",&number);
  if( number>0){
      printf("Natural number");
  }
  else{
      printf("Not a natural number");
  }
    
    return 0;
}