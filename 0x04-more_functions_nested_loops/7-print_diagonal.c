#include "holberton.h"

/**
 * print_diagonal - check the code.
 *
 * @n: external value that was check
 *
 * Description: Print a diagonal line.
 */
void print_diagonal(int n)
{
	int i = 0;
	int ii = 0;

        if (n > 0)
        {
                for(; i < n; i++)
		{
			if (i >= 1)
			{
				for(; ii < i; ii++)
				{
					_putchar(' ');
				}

			_putchar('\\');
			_putchar('\n');
			ii = 0;
			}
			else
			{
				_putchar('\\');
				_putchar('\n');
			}
		}
        }
        else
        {
                _putchar('\n');
        }
}
