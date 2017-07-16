#include "header.h"

/**
 * builtin_id - function that identifies a builtin function
 * @command: commands that passes through function
 * Return: builtin function
 **/
void builtin_id(char *command)
{
	int i = 0;

	builtin_t matches[] = {
		{"exit", sh_exit},
		{"env", env},
		{NULL, NULL}
	};

	for (; matches[i].function != NULL; i++)
	{
		if (_strcmp(matches[i].id, command) == 0)
		{
			matches[i].function();
			if (matches[i].function == NULL)
			{
				perror("Return NULL");
				exit(EXIT_SUCCESS);
			}
		}
	}
}

/**
 * sh_exit - builtin function that exits shell
 *
 * Return: exit
 **/
int sh_exit(void)
{
	exit(EXIT_SUCCESS);
}

/**
 * env - function that prints the environment
 *
 * Return: 0
 **/
int env(void)
{
	unsigned int i;

	for (i = 0; environ[i] != '\0'; i++)
		_puts(environ[i]);
	return (0);
}
