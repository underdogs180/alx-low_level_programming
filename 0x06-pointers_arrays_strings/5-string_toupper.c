#include <stdio.h>
#include "holberton.h"
/**
 *string_toupper - a function that changes a string to uppercase
 *
 *@s: a pointer to a variable of the type char
 *
 *Return: dest data
 */
char *string_toupper(char *s)
{
  int i;
  for (i = 0; s[i]; i++)
    {
      if (s[i] >= 97 && s[i] <= 122)
	{
	  s[i] -= 32;
	}
    }
  return (s);
}
