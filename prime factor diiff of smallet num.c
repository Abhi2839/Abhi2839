#include <stdio.h>

int main ()
{
  int n;
  int cnt = 0;
  int ans = 0;
  scanf ("%d", &n);
  int i = 2;
  while (i <= n)
	{
	  if (n % i == 0)
		{
		  int j = 1;
		  int cnt_factors = 0;
		  while (j <= i)
			{
			  if (i % j == 0)
				{				// i =2 j = 2
				  cnt_factors++;
				}
			  j++;
			}
		  if (cnt_factors == 2)
			{
			  cnt++;
			  if (cnt == 1)
				{
				  ans = n - i;
				}
			}
		}
	  i++;
	}
  printf ("%d %d", cnt, ans);
}
