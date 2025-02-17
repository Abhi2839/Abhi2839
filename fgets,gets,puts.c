#include <stdio.h>
// void string(char arr[]);
int main()
{
   char firstname[40];
   gets(firstname);// warning will that is dangerous and unsafe.
   
   fgets(firstname,100,stdin);
   puts(firstname); // output
//   scanf("%s",firstname);
//   printf("%s",firstname);
    return 0;
}