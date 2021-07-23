#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Sum the numbers passed to the function.
 * @n: Quantity of numbers
 *
 * Return: Result of adding the numbers or 0 if no arguments was passed
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i = 0, sum = 0;
va_list ap;

va_start(ap, n);

if (n == 0)
{
return (0);
}

for (i = 0; i < n; i++)
{
sum += va_arg(ap, const unsigned int);
}
va_end(ap);
return (sum);
}
