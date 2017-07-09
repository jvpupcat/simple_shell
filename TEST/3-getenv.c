#include "header.h"

/**
 * _getenv - function that gets the environment
 *
 * Return: none
 **/
int main(void)
{
	char **env;

	for (env = environ; *env != NULL; env++)
		puts(*env);
	return (0);
}
