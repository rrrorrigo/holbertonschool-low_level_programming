#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H
#include <stdarg.h>

void _char(va_list up);
void _int(va_list up);
void _float(va_list up);
void _string(va_list up);

/**
 * tipo - check the format that be printed
 * @c: type of format
 * @ptrfunc: pointer to the function that print by format
 */
typedef struct tipo
{
	char *c;
	void (*ptrfunc)(va_list);
}tipo;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
