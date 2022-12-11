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
	printf("Last digit of %d is", n, num);
	num = n % 10;
	if (num > 5)
	{
		printf("last digit of %dis %d and is greater than 5\n", n, num);
	}
	if (num == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, num);
	}
	if (num < 6 && != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, num);
	return (0);
}
