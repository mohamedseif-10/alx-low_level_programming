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
	int i = 0, n = 0;


	while (i++ < 15)
	{
		if (i == 9)
		{
		n = 65;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
