#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - Print strings with a separator.
 * @format: Format string
 *
 * Return: Nothing (void)
 */
void print_all(const char *const format, ...)
{
unsigned int i = 0;
char *arg_s;
va_list arguments;

va_start(arguments, format);
while (*(format + i) != '\0' && (format))
{
switch (*(format + i))
{
case 's':
arg_s = va_arg(arguments, char *);
if (arg_s == NULL)
{
printf("(nil)");
break;
}
printf("%s", arg_s);
break;
case 'i':
printf("%d", va_arg(arguments, int));
break;
case 'f':
printf("%f", (float) va_arg(arguments, double));
break;
case 'c':
printf("%c", (char) va_arg(arguments, int));
break;
default:
i++;
continue;
}
if (*(format + i + 1) != '\0')
printf(", ");
i++;
}
printf("\n");
va_end(arguments);
}
