#include "main.h"

/**
  * _strlen - count the length of a string.
  * @str: string.
  * Return: length of i.
  */
int _strlen(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

