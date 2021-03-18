#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - print anything.
 * @format: type of argument passed
 * @...: parameters value
 */
void print_all(const char * const format, ...)
{
	va_list up;
	int i, ii = 0;
	char *espacio = "";
	tipo formato[] = {
		{"c", _char},
		{"i", _int},
		{"f", _float},
		{"s", _string},
		{NULL, NULL}
	};

	va_start(up, format);
	while (format && format[ii] != '\0')
	{
		i = 0;
		while (i < 4)
		{
			if (*(formato[i].c) == format[ii])
			{
				printf("%s", espacio);
				formato[i].ptrfunc(up);
				espacio = ", ";
			}
			i++;
		}
		ii++;
	}
	printf("\n");
	va_end(up);
}
/**
 * _char - print a char
 *
 * @up: type of va_list that be printed
 */
void _char(va_list up)
{
	printf("%c", va_arg(up, int));
}

/**
 * _int - print a integer
 *
 * @up: type of va_list that be printed
 */
void _int(va_list up)
{
	printf("%d", va_arg(up, int));
}
/**
 * _float - print a float
 *
 * @up: type of va_list that be printed
 */
void _float(va_list up)
{
	printf("%f", va_arg(up, double));
}
/**
 * _string - print a string
 *
 * @up: type of va_list that be printed
 */
void _string(va_list up)
{
	char *check;

	check = va_arg(up, char *);
	if (!check)
		check = "(nil)";
	printf("%s", check);
}
