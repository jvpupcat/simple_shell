#include "header.h"

/**
 * _getenv - function that gets the environment
 *
 * Return: token
 **/
char *_getenv(const char *name)
{
	int compare, i;
	char *token;

	for (i = 0; environ[i] != '\0'; i++)
	{
		token = strtok(environ[i], "=");
		compare = strcmp(name, token);
		if (compare == 0)
		{
			token = strtok(NULL, "\0");
			return (token);
		}
	}
	return (token);
}
