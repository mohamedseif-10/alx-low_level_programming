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
		j = 49;
		while (j < 59)
		{
			putchar(i);
			putchar(j);
			if (j != 58)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
		j++;
	}
	putchar('\n');
	return (0);
}
