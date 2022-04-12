#include <unistd.h>

/**
 * _putcahr - writes the character c to stdout
 * @c: The character to print
 * Return: Always return 0 (success\correct)
 */
int _putcahr(cahr c)
{
	return (write(1, &c, 1));
}
