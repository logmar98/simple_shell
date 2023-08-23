#include "main.h"

/**
  * **str_spliter - splits a string.
  * @buf: is string
  * Return: splitted string.
  */
char **str_spliter(char *buf)
{
	char **tokens = NULL;
	char *token, *del = " \n\t";
	int i;

	tokens = malloc(sizeof(char *) * 1024);
	if (tokens == NULL)
	{
		perror("memory could not be allocated");
		exit(EXIT_FAILURE);
	}
	token = strtok(buf, del);
	i = 0;
	while (token != NULL)
	{
		tokens[i] = token;
		token = strtok(NULL, del);
		i++;
	}
	tokens[i] = NULL;
	return (tokens);
}

