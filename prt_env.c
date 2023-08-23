#include "main.h"

/**
  * prt_env - prints all the environment and variables.
  * Return: nothing.
  */
void prt_env(void)
{
	int i;

	i = 0;
	while (environ[i])
		printf("%s\n", environ[i++]);
}

