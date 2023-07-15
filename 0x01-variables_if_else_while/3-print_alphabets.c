#include <stdio.h>

/**
 * main - Entry
 *
 * Description: this function prints all alphabet
 *
 * Return: 0 if (success)
*/

int main(void)
{
	int i = 97;

	while (i <= 123)
	{
		if (i == 123)
			i = 65;
		if (i == 91)
			break;
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
