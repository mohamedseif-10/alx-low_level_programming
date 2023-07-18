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
	int i = 48, j = 49;

	while (i < 58)
	{
		int n = 1;

		while (j < 58)
		{
			putchar(i);
			putchar(j);
			if (i != 57)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		n++;
		j = 49 + n;
		i++;
	}
	putchar('\n');
	return (0);
}
