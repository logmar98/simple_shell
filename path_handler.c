#include "main.h"

/**
  * *path_handler - makes a executed command from path.
  * @cmd: command.
  * Return: executed command.
  */
char *path_handler(char *cmd)
{
	char *path = NULL, *token = NULL, chr = '/';
	char *tokens[1024];
	int i;
	char *cwd = getcwd(NULL, 0);
	struct stat st;

	path = getenv("PATH");
	token = strtok(path, ":");
	if (tokens == NULL)
	i = 0;
	while (token != NULL)
	{
		tokens[i] = token;
		token = strtok(NULL, ":");
		i++;
	}
	tokens[i] = NULL;

	i = 0;
	while (tokens[i] != NULL)
	{
		chdir(tokens[i]);
		if (stat(cmd, &st) == 0)
		{
			tokens[i] = _strncat(tokens[i], &chr, 1);
			cmd = _strcat(tokens[i], cmd);
			break;
		}
		i++;
	}
	chdir(cwd);
	return (cmd);
}

