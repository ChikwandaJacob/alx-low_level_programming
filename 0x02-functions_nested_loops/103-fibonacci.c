#include <stdio.h>

/**
 * printFib - prints the fibonachi sequence
 *
 * @range: fibonachi length
 * Return: nothing
 */
void printFib(int range)
{
	static long int first = 0, second = 1, sum, total = 0;

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
 * main - prints the first 50 Fibonacci numbers starting with 1 and 2
 *
 * Return: 0 on success
 */
int main(void)
{
	printFib(50);

	return (0);
}
