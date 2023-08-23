#include "main.h"
/**
  * main - main shell
  *
  * Return: 0
  */
int main(int ac __attribute__((unused)), char **av, char *env[])
{
	char *buf = NULL;
	size_t buf_size = 0;
	int status;
	pid_t pid;
	char **arr;
	while (1)
	{
		if (isatty(STDIN_FILENO))
			write(1, "$ ", 2);
		if (getline(&buf, &buf_size, stdin) == -1)
			break;
		if (buf == NULL)
			exit(0);
		arr = str_spliter(buf);
		if (!arr[0])
		{
			free(arr);
			continue;
		}
		if (_strcmp(arr[0], "env") == 0)
		{
			prt_env(), free(arr);
			continue;
		}
		if (_strcmp(arr[0], "exit") == 0)
			free(arr), free(buf), exit(0);
		pid = fork();
		if (pid == 0)
		{
			if (_strchr(arr[0], '/') == NULL)
				arr[0] = path_handler(arr[0]);
			if (execve(arr[0], arr, env))
			{
				printf("%s: 1: %s: not found", av[0], arr[0]);
				exit(EXIT_FAILURE);
				break;
			}
		}
		wait(&status), free(arr);
	}
	free(buf);
	return (0);
}

