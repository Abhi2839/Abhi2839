#include<stdio.h>

int
main ()
{
  int a;
  scanf ("%d", &a);
  char ch;
  for (int i = 1; i <= a; i++)
	{
	  if (i % 2 != 0)
		{
		  ch = 64 + i;			// 96 for first small
		  printf ("%c ", ch);
		}
	  else
		{
		  ch = 96 + i;			// 64 for 2nd capital
		  printf ("%c ", ch);
		}
	}
}
