#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_strings - Print strings with a separator.
 * @separator: Separator
 * @n: Quantity of numbers
 *
 * Return: Result of adding the numbers or 0 if not arguments were passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list ap;
char *p;

va_start(ap, n);
for (i = 0; i < n; i++)
{
p = va_arg(ap, char *);
if (p == NULL)
{
printf("(nil)");
}
else
{
printf("%s", p);
}
if (separator != NULL && i < (n - 1))
{
printf("%s", separator);
}
}
printf("\n");
va_end(ap);
}
