#include "variadic_functions.h"
/**
 * sum_them_all - sum of all its parameters.
 * @n: number of parameters
 * @...: parameters value
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list up;
	unsigned int i = 0, ii = 0;

	va_start(up, n);

	while (ii < n)
	{
		i += va_arg(up, int);
		ii++;
	}
	if (n == 0)
		return (0);
	va_end(up);
	return (i);


}
