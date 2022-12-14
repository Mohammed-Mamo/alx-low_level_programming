#include <stdio.h>
#include "main.h"
/** 
 * putchar display a character _putchar
 * no return value
 * no argument
 */
int main(void)
{
	int t = 0;
	char word [] = "_putchar";
	for (t = 0; t < 8; t++)
		_putchar(word[t]);
	_putchar('\n');

return (0);
}
