#include "main.h"
#include <stdio.h>

/**
  * cap_string - ...
  * @s: ...
  *
  * Return: char value
  */
char *cap_string(char *s)
{
	int a = 0, i;
	int c = 13;
	char sep[] = {32, '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	while (s[a])
	{
		i = 0;

		while (i < c)
		{
			if ((a == 0 || s[a - 1] == sep[i]) &&
			    (s[a] >= 'a' && s[a] <= 'z'))
				s[a] -= 32;

			i++;
		}

		a++;
	}

	return (s);
}
