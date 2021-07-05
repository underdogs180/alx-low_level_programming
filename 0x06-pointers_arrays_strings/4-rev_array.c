#include <stdio.h>
#include "holberton.h"
/**
 *reverse_array - a function that prints an array of integers in rev
 *@a: pointer to datatype of an integer
 *@n: a variable of an integer datatype
 *
 *Return: result of pointer
 */
void reverse_array(int *a, int n)
{
  int i;
  int *first = a;
  int *last = a + n - 1;
  while (first < last)
    {
      int temp = *first;
      *first = *last;
      *last = temp;
      first++;
      last--;
    }
  for (i = 0; i < n;)
    {
      i++;
    }
}
