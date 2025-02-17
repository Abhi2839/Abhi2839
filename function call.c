#include <stdio.h>
void printhello(); //function declaration
int main()
{
    printhello(); //function call
    printhello();
    printhello();

    return 0;
}
//function definition
void printhello(){
    printf("Hello! \n");
}