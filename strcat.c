#include "main.h"

/**
 * *_strcat - connect two strings.
 *
 * @str1: first string.
 * @str2: second string.
 * Return: connected string
 */
char *_strcat(char *str1, char *str2)
{
	int i = 0, n;

	n = _strlen(str1);
	while (i < n && str2[i] != '\0')
	{
		str1[n + i] = str2[i];
		i++;
	}
	str1[n + i] = '\0';
	return (str1);
}

