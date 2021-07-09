#include <stdio.h>
#include "holberton.h"
#include "string.h"
/**
 * _memcpy - Copies the first @n bytes of the memory area
 *          pointed to by @src into the memory area pointed to by @dest.
 * @dest: A pointer to the memory area to be filled.
 * @src: A pointer to the memory area to be copied.
 * @n: The number of bytes to be copied.
 *
 * Return: A pointer to the copied memory area @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
  unsigned int i;
  char *ptr = dest;

  for (i = 0; i < n; i++)
    {
      dest[i] = src[i];
    }
  return (ptr);
}
