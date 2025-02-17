

#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int b=a%1000/100+a%100/10+a%10;
    printf("%d",b);
// sum of last three digit if we have sum of last two digit a%100/10+.......
    return 0;
}
