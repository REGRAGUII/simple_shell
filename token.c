#include "shell.h"

char    **token(char *line)
{
    char *token = NULL, *temp = NULL;
    char **command = NULL;
    int cpt = 0, x= 0;

    if (!line)
        return (NULL);
    temp = _strdup(line);
    token = strtok(temp , DELIM);
    if (token == NULL )
    {
        free(line), line = NULL;
        free(tmp), tmp = NULL;
        return (NULL);
    }
    while (token)
    {
        cpt++;
        token = strtok(NULL, DELIM);
    }
    free(temp), temp = NULL;

    command = malloc (sizeof(char *) * (cpt + 1));
    if (!command)
    {
        free(line);
        return (NULL);   
    }

  token = strtok(line , DELIM);
    while (token)
    {
        command[x] = token;
        token = strtok(NULL, DELIM);
        x++;
    }
    free(line), line = NULL;
    command[x] = NULL;
    return (command);
}