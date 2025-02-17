
#include <stdio.h>

int main()
{
float item[3];
printf("item 1: ");
scanf("%f",&item[0]);
 printf("item 2: ");
scanf("%f",&item[1]);
 printf("item 3:");
scanf("%f",&item[2]);
printf("Total price1:%f\n",item[0]+0.18*item[0]);
printf("Total price2:%f\n",item[1]+0.18*item[1]);
printf("Total price3:%f\n",item[2]+0.18*item[2]);
// printf("phy=%d,chem=%d,math=%d,bio=%d,c lang=%d",marks[0],marks[1],marks[2],marks[3],marks[4]);
    return 0;
}