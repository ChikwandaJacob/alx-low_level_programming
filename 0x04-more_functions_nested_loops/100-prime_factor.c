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
	long divisor, prime_number;

	while (n != 1)
	{
		if (n % divisor == 0)
		{
			n = n / divisor;
			prime_number = divisor;
		}
		divisor++;
	}
	return (prime_number);
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
