#include <stdio.h>
#include <stdlib.h>
/**
*main - main function to generate a random number
*
*Return: 0 (success)
*/
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
