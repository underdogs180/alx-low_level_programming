#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - Function that allocates memory for an array.
 * @nmemb: Number of elements.
 * @size: Size of each element.
 *
 * Return: Pointer to the array or NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *p;

if (nmemb <= 0 || size <= 0)
return (NULL);

p = malloc(nmemb * size);

if (p == NULL)
return (NULL);

for (i = 0; i < (nmemb * size); i++)
*(p + i) = 0;

return ((void *) p);
}
