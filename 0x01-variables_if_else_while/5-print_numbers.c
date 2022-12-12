#include <stdlib.h>
/**
*main - main block
*Description: prints all single digit number of base 10
*starting from 0, followed by new line.
*Return: 0
*/
int main(void)
{
	int a;

	for (a = 0; a <= 10; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
