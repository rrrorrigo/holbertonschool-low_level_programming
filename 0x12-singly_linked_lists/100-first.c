#include <stdio.h>
/**
 * before - print a string before the main function
 */
void __attribute__ ((constructor)) before(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
