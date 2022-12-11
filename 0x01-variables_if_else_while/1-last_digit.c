#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - main function to generate a random number
*
*Return: 0 (success)
*/
int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is", n);
	num = n % 10;
	if (num > 5)
	{
		printf("last digit of %dis %d ", n, num);
	}
	if (num == 0)
	{
		printf("and is 0");
	}
	if (num < 6 && != 0)
	{
		printf("and is less than 6 and not 0");
	}
	printf("\n");
	return (0);
}
