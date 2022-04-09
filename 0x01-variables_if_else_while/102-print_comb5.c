#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always return 0 (success\correct)
 */
int main(void)
{
	int c = 48, d = 48, e = 48, f = 49;

	while (c < 58)
	{
		while (d < 58)
		{
			while (e < 58)
			{
				while (c < 58)
				{
					
					putchar(c);
					putchar(d);
					putchar(' ');
					putchar(e);
					putchar(f);
					if (!(c == 57 && d == 56 && e == 57 && f == 57))
					{
						putchar(',');
						putchar(' ');
					}
					
					f++;
				}
				e++;
				f = 48;
			}
			d++;
			d = c;
			x = d + 1;
		}
		c++;
		d = 48;
		e = c;
		f = d + 1;
	}
	putchar('\n');

	return (0);
}
