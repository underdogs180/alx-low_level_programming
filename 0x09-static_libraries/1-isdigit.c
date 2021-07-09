#include <stdio.h>
#include "holberton.h"
/**
 * _isdigit - a function used to check if a character is a digit.
 *
 * @c: takes in the argument.
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
  if (c >= 48 && c <= 57)
    {
      return (1);
    }
  else
    {
      return (0);
    }
}
