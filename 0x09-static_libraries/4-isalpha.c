
#include "holberton.h"

/**
 * _isalpha - a function that checks for alphabetic character.
 * @c: is the int that will use for the argument of the function
 * Return: 1 if alphabetic. 0 if not
 */
int _isalpha(int c)
{
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    return (1);
  else
    return (0);
}
