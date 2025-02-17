
#include <stdio.h>
// void string (char arr[]);
// int length(char arr[]);
#include <string.h>
int main()
{
    // take input from user 
    char str[100];
    char ch;
    int i=0;
    while(ch!='\n'){
        scanf("%c",&ch);
        str[i]=ch;
        i++ ;
    }
    str[i]='\0' ; // in string there is null character automATICaaly but in character it is not;
    puts(str);
//   char name[100];
//   fgets(name,100,stdin);
//   printf("length is:%d",length(name));

//   char name[]="Abhey";
//   char name1[]="Garg";
//   printf("%d",strcmp(name,name1));
//   strcpy(name,name1);
//   puts(name);
//   strcat(name,name1);
//   puts(name);
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
    
