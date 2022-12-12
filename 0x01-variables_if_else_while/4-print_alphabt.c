#include <stdio.h>
#include <stdlib.h>
/**
*main - main block
*Description: get random number and check its
*Return: 0
*/
int main(void)
{
	char c = 'a';

	while (c <= 'Z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
