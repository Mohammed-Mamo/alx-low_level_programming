#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: string to write to the file
 *
 * Return: 1 on Success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int FN, a, b;

	if (filename == NULL)
	{
		return (-1);
	}

	FN = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (FN == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	for (a = 0 ; text_content[a] != '\0' ; a++)
		;

	b = write(FN, text_content, a);

	if (b == -1)
	{
		return (-1);
	}

	close(FN);
	return (1);
}
