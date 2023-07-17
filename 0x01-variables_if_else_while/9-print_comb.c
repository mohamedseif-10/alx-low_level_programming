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
	int i = 48;


	while (i < 58)
	{
		putchar(i);
		if (i != 57)
		putchar(',');
		putchar(' ');
		i++;
	}
	return (0);
}
