#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print the alphabeth with lowercase using putchar
 * Return: 0
 */
int main(void)
{

	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
