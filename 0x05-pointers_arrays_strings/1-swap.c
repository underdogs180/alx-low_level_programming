#include "holberton.h"
/**
 * swap_int - swaps the value of two integers
 * @a: a pointer to the integer we will be swapping
 * @b: a pointer to the integer we will be swapping
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
  int tmp;

  tmp = *a;
  *a = *b;
  *b = tmp;
}
