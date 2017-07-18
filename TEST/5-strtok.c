#include "header.h"

/**
 * _strtok - function that tokenizes a string
 *
 * Return: exit upon success
 **/
int _strtok(char *str)
{
	char *buffer;
	char *token;
	int i;

	buffer = malloc(sizeof(char *) * 100);
	if (buffer == NULL)
		exit;
	token = strtok(str, ":")
	if (token == NULL)
		return (NULL);
	for (i = 0; token != NULL; i++)
	{
		buffer[i] = token;
		token = strtok(NULL, DELIM);
	}
	return (buffer);
}
