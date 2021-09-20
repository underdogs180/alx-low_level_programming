#include "main.h"

/**
 * _strcmp - a function that compares two strings
 *@s1: string 1
 *@s2: string 2
 *Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{
  int i, j;

  j = 0;

  for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
    {
      if (s1[i] != s2[i])
	{
	  j = s1[i] - s2[i];
	  break;
	}
    }
  return (j);
}
