#include <stdio.h>

/**
 * printFib - prints the fibonachi sequence
 *
 * @range: fibonachi length
 * Return: nothing
 */
void printFib(int range)
{
	static long int first = 0, second = 1, total = 0, sum;

	if (range != 0)
	{
		sum = first + second;
		first = second;
		second = sum;

		if ((sum < 4000000) && (sum % 2 == 0))
			total += sum;

		printFib(range - 1);
	}
	else
	{
		printf("%ld", total);
		printf("\n");
	}
}

/**
 * main - finds and prints the sum of the even-valued terms of fibonachi
 *
 * Return: 0 on success
 */
int main(void)
{
	printFib(50);

	return (0);
}
