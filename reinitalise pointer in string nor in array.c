#include <stdio.h>

int main()
{
    char *str="hello world";
    puts(str);
    str="world";
    puts(str);
    char str1[]="hello"; // instead of str1 we write str gives error 
    puts(str1);
    return 0;
}