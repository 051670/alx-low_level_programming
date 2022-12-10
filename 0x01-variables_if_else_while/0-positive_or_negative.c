#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main  - main block
*DDescription: Get a ranom number and print the number
*if it is positive,negative, or zerp
*return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
