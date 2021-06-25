# include <stdio.h>
# include <math.h>

/**
 * primeFactors - prints prime factors
 * @n: number whose prime factors are to printed.
 *
 * Return: returns nothing.
 */
void primeFactors(long n)
{
	long i;

	while (n % 2 == 0)
	{
		printf("%d", 2);
		n = n / 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			printf("%ld", i);
			n = n / i;
		}
	}

	if (n > 2)
		printf("%ld", n);
}

/**
 * main - main function
 * @void: takes nothing.
 *
 * Return: 0
 */
int main(void)
{
	primeFactors(612852475143);
	putchar('\n');
	return (0);
}
