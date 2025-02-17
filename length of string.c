
#include <stdio.h>
void string (char arr[]);
int length(char arr[]);
int main()
{
  char name[100]; //array
  fgets(name,100,stdin); //output
  printf("length is:%d",length(name));
  return 0;
}
int length(char arr[]){
    int countofletter=0;
    for (int i =0;arr[i]!='\0';i++){
        countofletter++;}
        return countofletter-1;
    }
    void string(char arr[]){
        for (int i=0;arr[i]!='\0';i++){
            printf("%c",arr[i]);
        }
        printf("\n");}