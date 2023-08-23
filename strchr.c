#include "main.h"

/**
 * *_strchr - locates a character in a string.
 *
 * @str: string.
 * @chr: character to be find.
 * Return: str if character found.
 */
char *_strchr(char *str, char chr)
{
	while (*str != '\0')
	{
		if (*str == chr)
		{
			return (str);
		}
		str++;
	}
	return (0);
}

