#include "holberton.h"
/**
 * more_numbers - a function used to print numbers on 10 lines.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
  int i = 0;
  int a = 0;
  while (i < 10)
    {
      while (a <= 14)
	{
	  if (a >= 10)
	    {
	      _putchar((a / 10) + '0');
	    }
	  _putchar((a % 10) + '0');
	  a++;
	}
      a = 0;
      i++;
      _putchar('\n');
    }
}
