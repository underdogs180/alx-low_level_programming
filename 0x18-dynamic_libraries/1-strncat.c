#include <stdio.h>
#include "string.h"
#include "main.h"
/**
 *_strncat - a function that appends a limited portion of src to dest
 *@dest: pointer char void
 *@src: pointer char source
 *@n: reduces the size of dest
 *Return: dest data
 */
char *_strncat(char *dest, char *src, int n)
{
  char *ptr = dest + strlen(dest);

  while (*src != '\0' && n--)
    {
      *ptr++ = *src++;
    }
  *ptr = '\0';
  return (dest);
}
