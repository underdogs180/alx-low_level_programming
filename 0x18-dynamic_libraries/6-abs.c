#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 * @n: is an integer
 * Return: abs(n)
 */
int _abs(int n)
{
  if (n >= 0)
    {
      return (n);
    }
  else
    {
      return (n * -1);
    }
}
