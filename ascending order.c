#include<stdio.h>

int main(){
    
    int n;
    scanf("%d",&n);
    
    int last_digit = n%10;    // 3;
    n/=10;
    int flag=0;
    while(n>0){
        int rem = n%10;  // 3  , 2  , 1 
        if(rem<last_digit){
            last_digit = rem;   // 3  , 2 
        }
        else{
            // printf("not in increasing");
            flag = 1;
        }
        n/=10;
        
    }
    if(flag == 1){
        printf("number is not in ascending order");
        
    }
    else{
        printf("number is in asscending order");
    }
}