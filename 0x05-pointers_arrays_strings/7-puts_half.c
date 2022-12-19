#include "main.h"
void puts_half(char *str)
{
	int h, i;
	int length = _strlen(*str);

	if (length % 2 !=0)
		h = (length + 1) / 2;
	else h = length / 2;
i = h;
for (; i < length; i++)
	_putchar(str[i]);
_putschar('\n');
}
