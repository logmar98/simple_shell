#include "main.h"

/**
 *  * *_strncat - connect two strings.
 *
 * @str1: first string.
 * @str2: second string.
 * @n: string length.
 * Return: connected string
 */
char *_strncat(char *str1, char *str2, int n)
{
	int i = 0, m;

	m = _strlen(str1);
	while (i < n && str2[i] != '\0')
	{
		str1[m + i] = str2[i];
		i++;
	}
	str1[m + i] = '\0';
	return (str1);
}

