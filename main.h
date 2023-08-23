#ifndef SHELL_H
#define SHELL_H




#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

extern char **environ;

void prt_env(void);
int _strcmp(char *str1, char *str2);
char **str_spliter(char *buf);
char *path_handler(char *cmd);
char *_strncat(char *str1, char *str2, int n);
int _strlen(char *str);
char *_strcat(char *str1, char *str2);
char *_strchr(char *str, char chr);

#endif

