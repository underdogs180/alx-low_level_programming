#include <stdio.h>
#include "holberton.h"
/**
 *leet - Write a function that encodes strings into numbers
 *
 *@s: pointer char source
 *Return: p data
 */
char *leet(char *s)
{
  char *m = "aeotl";
  char *M = "AEOTL";
  int x[] = {'4', '3', '0', '7', '1'};
  int i;
  char *p = s;
  while (*s != '\0')
    {
      for (i = 0; i < 5; i++)
	{
	  if (*s == *(m + i) || *s == *(M + i))
	    *s = x[i];
	}
      s++;
    }
  return (p);
}
