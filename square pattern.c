#include <stdio.h>

int main()
{
    for(int i=1;i<=4;i++){  //outer loop for no of lines
        for (int i=1;i<=4;i++){  //inner loop number of element in each row
            printf("*");
        }
        printf("\n");
    }

    return 0;
}