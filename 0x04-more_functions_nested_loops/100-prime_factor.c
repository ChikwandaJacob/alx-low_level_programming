# include <stdio.h>
# include <math.h>

/**
 * biggestPrimeFactor - prints prime factors
 * @n: number whose prime factors are to printed.
 *
 * Return: returns biggest prime factor.
 */
long biggestPrimeFactor(long n)
{
	int i;
	long assumption1, assumption2, assumption3;

	while (n % 2 == 0)
	{
		assumption1 = 2;
		n = n / 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			assumption2 = i;
			n = n / i;
		}
	}

	if (n > 2)
		assumption3 = n;
	if (assumption1 < assumption2)
		if (assumption2 > assumption3)
			return (assumption2);
		else
			return (assumption3);
	else
		return (assumption1);
	return (0);
}

/**
 * main - main function
 * @void: takes nothing.
 *
 * Return: 0
 */
int main(void)
{
	printf("%ld\n", biggestPrimeFactor(612852475143));
	return (0);
}
