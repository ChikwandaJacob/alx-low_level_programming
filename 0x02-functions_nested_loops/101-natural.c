#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: nothing
 */
int main(void)
{
	int i, sum, mul_3, mul_5;

	sum = 0;

	for (i = 1; i < 1024; i++)
	{
		mul_3 = i * 3;
		mul_5 = i * 5;

		if (mul_3 < 1024)
			sum += mul_3;
		if (mul_5 < 1024)
			sum += mul_5;
	}

	printf("%d\n", sum);

	return (0);
}
