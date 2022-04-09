#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always return 0 (Success\correct)
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar (48 + c);
		c++;
	}
	putchar('\n');
	return (0);
}
