#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(int ch)
{
	static int i;
	static char buf[LOCAL_BUF];

	if (ch == -1 || i >= LOCAL_BUF)
	{
		write(1, buf, i);
		i = 0;
	}
	if (ch != -1)
		buf[i++] = ch;
	return (1);
}

#include "main.h"

/**
 * _puts - prints a string with newline
 * @str: the string to print
 *
 * Return:( str-a)
 */
int _puts(char *str)
{
	char *a = str;

	while (*str)
		_putchar(*str++);
    return str - a;
}

