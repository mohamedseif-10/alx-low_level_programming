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


	while (i < 15)
	{
		putchar(n);
		n++;
		i++;
		if (i == 9)
                {
                n = 65;
                }
	}
	putchar('\n');
	return (0);
}
