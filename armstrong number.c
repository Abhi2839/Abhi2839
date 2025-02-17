#include <stdio.h>
#include<math.h>
int
main ()
{
  int a, sum = 0, b, d;
  printf ("Enter the number to check armstrong number or not:");
  scanf ("%d", &a);
  int c = (log10 (a)) + 1;		//number of digit in a number
  d = a;						//store value of a as in loop value of a will be changed
  while (a > 0)
	{
	  b = a % 10;
	  sum += pow (b, c);
	  a = a / 10;
	}
  if (sum == d)
	{
	  printf ("%d is a armstrong number", d);
	}
  else
	{
	  printf ("%d is not armstrong number", d);
	}



  return 0;
}
