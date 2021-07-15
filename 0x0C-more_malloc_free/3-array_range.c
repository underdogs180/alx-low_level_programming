#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - Function that allocates memory for an array.
 * @min: Minimum.
 * @max: Maximum.
 *
 * Return: Pointer to the array or NULL.
 */
int *array_range(int min, int max)
{
int size;
int i;
int *p;

if (min > max)
return (NULL);

size = max - min + 1;

p = malloc(sizeof(int) * size);

if (p == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
*(p + i) = min;
min++;
}

return (p);
}
