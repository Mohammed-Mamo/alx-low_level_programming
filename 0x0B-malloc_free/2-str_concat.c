#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * Write a function that concatenates two strings
 * str_concat - is function
 * @s1: string 1
 * @s2: string 2
 * Return: new pointer
 */
char *str_concat(char *s1, char *s2)
{
	int len1 , len2 , len3;
	char *t;
	int i = 0;

	len1 = strlen(*s1);
	len2 = strlen(*s2);
	len3 = len1 + len2;
	t = malloc(len3 * sizeof(char));

	while (s1 != '\0')
	{

		for (; i < len1; i++)
			t[i] = s1[i];
	}
	while (s2 != '\0')
	{
		for (; i < len3; i++)
			t[i] = s2[i];
	}
	return (t);
}
