// #include<stdio.h>
// #include<math.h>

// int main(){
//     int n = 20901;
//     int x = floor(log10(n))+1;
    
//     printf("No. of digits = %d", x);

// }
#include <stdio.h>
// #include <math.h>

int main(){
    int n = 209010;
    int count = 0;
    
    while(n>0){
        count++;
        n = n/10;
    }
    printf("No. of digits = %d", count);

}