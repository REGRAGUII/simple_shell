#ifndef SHELL_H
#define SHELL_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <string.h>
#include <fcntl.h>

extern char **env;

#define DELIM " \t\n"

void free2D(char **arr);

char    *read_line(void);
char    **token(char *line);
int _execute(char **command, char **argv);

/* str.c */
unsigned int _strlen(char *str);
int _strcmp(const char *s1, const char *s2);
char *_strcpy(char *dest, const char *src);
char *_strcat(char *dest, const char *src);
char *_strdup(const char *str);

#endif