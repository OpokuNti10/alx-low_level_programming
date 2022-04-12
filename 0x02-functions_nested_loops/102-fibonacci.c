#include <stdio.h>
/**
 * main - Entry point
 * Description - prints out the first 50 fibonacci numbers
 * Return: Always return 0 (success\correct).
 */

int main(void)
{
	int i = 0;
	long int a = 0, b = 1, next;

	while (i < 50)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (i < 49)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
	return (0);
}
