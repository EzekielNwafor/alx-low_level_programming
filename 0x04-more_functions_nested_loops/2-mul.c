#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 4; i++)
	{
		printf("this is the STARTING of outer loop %d\n", i)
			for (j = 0; j <= 4; j++)
			{
				printf("       inner loop with number %d\n", j);
			}
		printf("this is the ENDING  of outer loop %d\n", i);
	}

	return (0)
