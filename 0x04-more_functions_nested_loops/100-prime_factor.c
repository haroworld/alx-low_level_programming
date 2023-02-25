#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of a number
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long x;
	long y;

	long n = 612852475143;
	double s = sqrt(n);

	for (x = 1; x <= s; x++)
	{
		if (n % x == 0)
		{
			y = n / x;
		}
	}
	printf("%ld\n", y);

	return (0);
}
