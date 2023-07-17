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
	int i = 0, n = 48;


	while (i < 15)
	{
		putchar(n);
		n++;
		i++;
		if (i == 10)
		{
			n = 97;
		}
	}
	putchar('\n');
	return (0);
}
