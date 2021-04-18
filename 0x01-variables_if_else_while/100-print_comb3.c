#include <stdio.h>
/**
 * main - function that prints all possible different combination
 * Return: Always 0
 */
int main(void)
{
	int decena, unidad, aux;

	for (decena = 0; decena <= 9; decena++)
	{
		unidad = 0 + aux;
		for (; unidad <= 9; unidad++)
		{
			if (decena != unidad)
			{
				putchar('0' + decena);
				putchar('0' + unidad);
				if (!(decena == 8 && unidad == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		aux++;
	}
	putchar ('\n');

	return (0);
}
