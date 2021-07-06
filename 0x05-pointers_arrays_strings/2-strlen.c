#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - a function used to check the length of a string.
 * @s: hold the value of a char.
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
  int l = 0;
  while (*s != '\0')
    {
      l++;
      s++;
    }
  return (l);
}
