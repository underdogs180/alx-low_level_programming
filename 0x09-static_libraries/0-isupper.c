#include <stdio.h>
#include "holberton.h"
/**
 * _isupper - a function used to check if an alphabet is of upper or lowercase.
 *
 * @c: takes in the argument.
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
  if (c >= 65 && c <= 90)
    {
      return (1);
    }
  else
    {
      return (0);
    }
}
