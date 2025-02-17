
#include <stdio.h>

int main()
{
  char ch;
  printf("Enter a chararcter:");
  scanf("%c",&ch);
  if(ch>'A' && ch<'Z'){
      printf("UPPERCASE");
  }
  else{
      printf("LOWERCASE");
  }
    
    return 0;
}
