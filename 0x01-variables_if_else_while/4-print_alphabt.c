#include <stdio.h>
#include <stdlib.h>
/**
*main - returns alphabets both except e and q
*
*Return: 0 (success)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'Z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
