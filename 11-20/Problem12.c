/*
The sequence of triangle numbers is generated by adding the natural numbers. So the 7th triangle number would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. The first ten terms would be:
1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...
Let us list the factors of the first seven triangle numbers:
     1: 1
     3: 1,3
     6: 1,2,3,6
    10: 1,2,5,10
    15: 1,3,5,15
    21: 1,3,7,21
    28: 1,2,4,7,14,28
We can see that 28 is the first triangle number to have over five divisors.
What is the value of the first triangle number to have over five hundred divisors?
Solution by Paul Kelly <nRage>
*/

#include <stdio.h>
#include <math.h>

int divisors(int n);

int main()
{
	int i = 1, other = 2;

	while(1)
	{
		if((divisors(i)) >= 500)
		{
			printf("%d\n", i);
			break;
		}
		i += other;
		other++;
	}
	return 0;
}


int divisors(int n)
{
	int count = 0, k;

	for(k=1; k<=sqrt(n); k++)
	{
		if((n % k) == 0)
		{
			count += 2;
		}
	}
	count += 1;
	return count;
}