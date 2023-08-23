#include "main.h"

int main(int ac, char **av, char **env)
{
char *buff = NULL;
size_t buff_size;
int n_char, i = 0, status;
char *token;
char **tokens;
pid_t pid;
(void)ac;
(void)av;
(void)env;
while (1)
{
    write(1, "$ ", 2);
    n_char = getline(&buff, &buff_size, stdin);
    tokens = malloc(sizeof(char *) * 1024);
    token = strtok(buff, " \t\n");
    if (n_char == EOF)
    {
        write(1, "\n", 1);
        exit(1);
    }

    while (token)
    {
        tokens[i] = token;
        token = strtok(NULL, " \t\n");
        i++;
    }
    tokens[i] = NULL;
    pid = fork();
    if (pid == 0)
    {    
        if (execve(tokens[0], tokens, NULL) == -1)
        {
            printf("%s: 1: %s: not found\n", av[0], tokens[0]);
        }
    }
    else
        wait(&status);
    i = 0;
    free(tokens);
    
}

return (0);
}
