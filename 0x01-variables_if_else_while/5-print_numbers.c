#include <stdio.h>

/**
 * main - Entry
 *
 * Description: print digits from zero to 9
 *
 * Return: Always 0 (if succcess)
*/

int main(void)
{
	int i = 47;

	while (++i < 10)
		putchar(i);
	putchar('\n');
	return (0);
}
