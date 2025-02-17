#include <stdio.h>
void evenorodd(int num)
{
    if (num%2==0)
        goto even;
    else
        goto odd;
even:
    printf("%d is even",num);
    return;
odd:
printf("%d is odd",num);
}
int main()
{
    int num;
    scanf("%d",&num);
    evenorodd(num);
    return 0;
}