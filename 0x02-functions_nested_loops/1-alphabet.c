include "main.h"

/**
  * print_alphabet - prints alphabet in lower case
  *
  * Return: Always return 0
  */

void print_alphabet(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		_putchar(al);
	}
	_putchar('\n');

}
