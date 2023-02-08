#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to write to the file
 *
 * Return: 1 on Success or -1 on Failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int FN, j;

	if (text_content == NULL)
	{
		text_content = "";
	}

	for (j = 0 ; text_content[j] != '\0' ; j++)
		;

	FN = open(filename, O_WRONLY | O_APPEND);

	if (FN == -1)
		return (-1);

	write(FN, text_content, j);

	close(FN);
	return (1);

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		if (filename != NULL)
		{
			return (1);
		}
		else
		{
			return (-1);
		}
	}
