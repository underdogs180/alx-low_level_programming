#include <stdio.h>
#include "string.h"
#include "main.h"
/**
 *_strcat - Write a function that appends strin src to dest, pointing to dest
 *@dest: pointer char void
 *@src: pointer char source
 *Return: dest data
 */
char *_strcat(char *dest, char *src)
{
  char *ptr = dest;
  while (*dest != '\0')
    {
      dest++;
    }
  while (*src != '\0')
    {
      *dest = *src;
      dest++;
      src++;
    }
  *dest = '\0';
  return (ptr);
}
