int check_separators(char c);
/**
 * cap_string - function
 * @s: input pointer
 * Return: a characte
 */
char *cap_string(char *)
{
	int i = 0;

	while (s[i]){if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))

		s[i] -= 32;

		if (check_seperators(s[i]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))

			s[i + 1] -= 32;

		i++;

	}

	return (s);

}

/**
 * check_separators - function
 * @c: input
 * Return: 1 if true 0 else
 *
 */
int check_seperators(char c)

{

	int i = 0;

	char seperators[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?','"', '(', ')', '{', '}' };

	for (; i < 13; i++)

	{

		if (c == seperators[i])

			return (1);

	}

	return (0);
}
