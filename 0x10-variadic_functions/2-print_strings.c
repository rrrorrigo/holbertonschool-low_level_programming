#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - print string of parameters.
 * @separator: separator of parameters
 * @n: number of parameters
 * @...: parameters string
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list up;
	unsigned int i = 0;
	char *string;

	va_start(up, n);
	for (; i < n; i++)
	{
		string = va_arg(up, char*);
		if (string == NULL)
			string = "(nil)";
		printf("%s", string);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(up);
}
