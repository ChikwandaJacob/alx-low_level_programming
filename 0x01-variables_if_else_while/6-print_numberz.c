#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  for (int a=0; a<10; a++)
    {
      char digit = a + '0';
      putchar(digit);
    }
  putchar('\n');
  return (0);
}
