#include "header.h"

/**
 * _getenv - function that gets the environment
 *
 * Return: none
 **/
char *_getenv(const char *name)
{
	char **env;

	for (env = environ; *env != NULL; env++)
		puts(*env);
	return (0);
}
