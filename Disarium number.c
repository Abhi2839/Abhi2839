#include <stdio.h>
#include <math.h>

int
countDigits (int num)
{
  int count = 0;
  while (num != 0)
	{
	  num /= 10;
	  count++;
	}
  return count;
}

int
isDisarium (int num)
{
  int originalNum = num;
  int sum = 0;
  int count = countDigits (num);

  while (num != 0)
	{
	  int digit = num % 10;
	  sum += pow (digit, count);
	  num /= 10;
	  count--;
	}

  return (sum == originalNum);
}

int
main ()
{
  int num;

  // Input the number
  printf ("Enter a number: ");
  scanf ("%d", &num);

  // Check if it's a Disarium number
  if (isDisarium (num))
	{
	  printf ("%d is a Disarium number\n", num);
	}
  else
	{
	  printf ("%d is not a Disarium number\n", num);
	}

  return 0;
}
