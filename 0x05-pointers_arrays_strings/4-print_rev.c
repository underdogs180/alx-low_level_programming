#include "holberton.h"
/**
 * print_rev - used to print a string in reverse order
 * @s: a pointer holding a character datatype
 *
 * Return: nothing
 */
void print_rev(char *s)
{
  int counter, strlength;

  counter = 0;

  while (*(s + counter) != '\0')
    {
      counter++;
    }

  strlength = counter;
  counter = 0;

  while (*(s + counter) != '\0')
    {
      _putchar(*(s + (strlength - (counter++ + 1))));
    }
  _putchar('\n');
}
