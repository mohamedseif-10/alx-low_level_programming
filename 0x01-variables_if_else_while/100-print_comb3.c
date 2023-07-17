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
	int i = 0, j = 1;

	while (j < 10)
	{
		putchar(i);
		putchar(j);
		if (j != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
		j++;
	}
	putchar('\n');
	return (0);
}
