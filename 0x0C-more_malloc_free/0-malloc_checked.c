#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - checks the address of allocated memory in the system
 *
 * @b: Size for memory allocation (bytes)
 *
 * Return: Void pointer.
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);

if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
