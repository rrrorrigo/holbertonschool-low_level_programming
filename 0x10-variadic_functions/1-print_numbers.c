#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - print all its parameters.
 * @separator: separator of parameters
 * @n: number of parameters
 * @...: parameters value
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list up;
	unsigned int i = 0;

	va_start(up, n);
	for (; i < n; i++)
	{
		printf("%d", va_arg(up, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(up);
}
