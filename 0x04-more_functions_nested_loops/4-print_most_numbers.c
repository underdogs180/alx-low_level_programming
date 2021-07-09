#include "holberton.h"
/**
 * print_most_numbers - a function used to print numbers, skipping 2 and 4.
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
  int n = 48;
  while (n <= 57)
    {

      if (n == 50 || n == 52)
	{
	  n++;
	  continue;
	}
      _putchar(n);
      n++;
    }
  _putchar('\n');
}
