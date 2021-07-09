#include "holberton.h"

/**
 * _puts - a function that prints a string, followed by a new line
 *@str: pointer of char
 *Return: Always 0
 */

void _puts(char *str)
{
  int i = 0;
  while (str[i])
    {
      _putchar(str[i]);
      i++;
    }
  _putchar('\n');
}
