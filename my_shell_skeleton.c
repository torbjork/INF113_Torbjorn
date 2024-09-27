#include <stdio.h>  // getline
#include <stdlib.h> // exit
#include <string.h> // strtok
#include <unistd.h> // execvp

#define MAX_ARGS 256

size_t n = 0;
char *line = NULL;
char *args[MAX_ARGS];

/*
    Reads one line from the standard input and
    splits it into tokens. The resulting tokens
    are stored args, terminated by a NULL pointer.
*/
void parse_command_from_user()
{
    int rc = getline(&line, &n, stdin);
    if (rc < 0) // Close the shell at end-of-input
        exit(0);

    int i = 0;
    args[i++] = strtok(line, " \n");
    while (i < MAX_ARGS && args[i - 1] != NULL)
        args[i++] = strtok(NULL, " \n");
}

int main()
{
    printf("> ");

    parse_command_from_user();

    execvp(args[0], args);

    return 0;
}