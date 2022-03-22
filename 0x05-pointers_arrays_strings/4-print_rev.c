#include "main.h"

/**
  * print_rev - Prints a string in reverse
@@ -10,15 +11,14 @@ void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}

	_putchar('\n');
}

