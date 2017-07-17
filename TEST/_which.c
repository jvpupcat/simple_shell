#include "header.h"

/**
 * _which - function that checks for user permission
 * @filename: files that need to be checked
 * Return: NULL
 **/
char *_which(char *command)
{
	char *path, *tokens, *store_pathtoks = NULL;
	char *copy_path = NULL;
	int i;
	struct stat st;

	path = _getenv("PATH");
printf("in which file, path - %s\n", path);
	copy_path = _strdup(path);

	tokens = strtok(copy_path, ":");
	for (i = 0; tokens != NULL; i++)
	{
	printf("in which file, 1st tokens - %s\n", tokens);
	printf("Before store_pathtoks malloc - %s\n", store_pathtoks);
		store_pathtoks = malloc(sizeof(char) * 1024);
		if (store_pathtoks == NULL)
			return (NULL);
		_strcpy(store_pathtoks, tokens);
	printf("after store_pathtoks strcpy %s\n", store_pathtoks);
		_strcat(store_pathtoks, "/");
	printf("after 1st strcat %s\n", store_pathtoks);
		_strcat(store_pathtoks, command);
	printf("after 2nd strcat %s\n", store_pathtoks);
		if (stat(store_pathtoks, &st) == 0)
		{
	printf("inside stat, store_pathtoks - %s", store_pathtoks);
			return (store_pathtoks);
		}
		else
		{
			perror("No Such Command");
			tokens = strtok(NULL, ":");
	printf("end of while loop - %s\n", tokens);
			free(store_pathtoks);
	printf("after free - %s\n", store_pathtoks);
			store_pathtoks = NULL;
	printf("after store_pathtoks = NULL - %s\n", store_pathtoks);
		}
	}
	return (store_pathtoks);
}

