


#include <stdio.h>
// void string (char arr[]);
// int length(char arr[]);
#include <string.h>
int main()
{
//   char name[100];
//   fgets(name,100,stdin);
//   printf("length is:%d",length(name));

  char name[100]="Abhey";
  char name1[100]="Garg";
//   strcpy(name,name1);
//   puts(name);
  strcat(name,name1);
  puts(name);
//   int length=strlen(name);
//   printf("length is:%d \n",length);
//   printf("length is:%lu= \n",strlen(name));
   return 0;
}
// int length(char arr[]){
//     int countofletter=0;
//     for (int i =0;arr[i]!='\0';i++){
//         countofletter++;}
//         return countofletter-1;
//     }
//     void string(char arr[]){
//         for (int i=0;arr[i]!='\0';i++){
//             printf("%c",arr[i]);
//         }
//         printf("\n");}
    
