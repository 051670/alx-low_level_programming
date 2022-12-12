#include <stdio.h>
#include <stdlib.h>
/**
*main - returns alphabets both except e and q
*Return: 0 (success)
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
