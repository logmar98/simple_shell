#include "main.h"

/**
  * _strcmp - compares two strings.
  * @str1: first string.
  * @str2: second string.
  * Return: difference of the two strings.
  */
int _strcmp(char *str1, char *str2)
{
	int result;
	int i = 0;

	while (str1[i] == str2[i])
	{
		if (str1[i] == '\0' && str2[i] == '\0')
		{
			break;
		}
		i++;
	}
	result = str1[i] - str2[i];
	return (result);
}

