#include <stdio.h>

int main()
{
int marks[5];
printf("Enter marks for phy: ");
scanf("%d",&marks[0]);
printf("Enter marks for chem: ");
scanf("%d",&marks[1]);
printf("Enter marks for math: ");
scanf("%d",&marks[2]);
printf("Enter marks for bio: ");
scanf("%d",&marks[3]);
printf("Enter marks for c lang: ");
scanf("%d",&marks[4]);
printf("phy=%d,chem=%d,math=%d,bio=%d,c lang=%d",marks[0],marks[1],marks[2],marks[3],marks[4]);
    return 0;
}