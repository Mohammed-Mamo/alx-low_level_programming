#include "main.h"
/**
 * read_textfile - this function reads a text file and prints it to the POSIX
 * @filename: name of the file
 * @letters: number of letters
 *
 * Return: the number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int FN, r, w;
	char *buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
	{
		return (0);
	}

/*OPEN*/
	FN = open(filename, O_RDONLY);

	if (FN == -1)
	{
		return (0);
	}
/*READ*/
	r = read(F, buffer, letters);
	if (r == -1)
	{
		return (0);
	}
/*WRITE*/
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1)
	{
		return (0);
	}
	close(FN);

	return (w);
}
