#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  for (int a=97; a<=122; a++)
    {
      if((char) a == 'q' || (char) a == 'e')
	continue;
      putchar(a);       
    }
  putchar('\n');
  return (0);
}
