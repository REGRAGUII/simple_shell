#include "shell.h"

/**
 * main - init data
 * @argc: input size of @argv
 * @argv: input array of command line arguments
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
    char *line = NULL;
    char **command = NULL;
    int status = 0;
    (void) ac;

    while (1)
    {
        line = read_line();
        if (line == NULL)
        {
            if (isatty(STDIN_FILENO))
                write(STDOUT_FILENO, "\n", 1);
            return (status);
        }

        command = tokenizer(line);
        if (!command)
            continue;


        status = _execute(command, argv);
    }
}