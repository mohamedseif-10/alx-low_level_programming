#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - ENtry
 *
 * Description: Function tell you if the inserted number is positive or not
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive", n);
	else if (n < 0)
		printf("%d is negative", n);
	else
		printf("%d is zero", n);
	return (0);
}
