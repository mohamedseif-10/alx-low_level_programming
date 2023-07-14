#include <stdio.h>

/**
 * main - Entry 
 *
 * Description: this a file
 *
 * Return: Always 0 (success)
*/

int mian(void)
{
	 printf("size if a char: %u byte(s)\ n",sizeof(char));
	 printf("size if an int: %u byte(s)\ n",sizeof(int));
	 printf("size if a long int: %u byte(s)\ n",sizeof(long int));
	 printf("size if a long long int: %u byte(s)\ n",sizeof(long long int));
	 printf("size if a float: %u byte(s)\ n",sizeof(float));
	 return (0);
}
