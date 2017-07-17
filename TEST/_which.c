#include "header.h"

/**
 * _which - function that checks for user permission
 * @filename: files that need to be checked
 * Return: NULL
 **/
char *_which(char *command)
{
	char *path, *tokens, store_pathtoks[1024];
	char *append_slash, *append_ls, *copy_path = NULL;
	int i;
	/*struct stat st;*/

	path = _getenv("PATH");
	copy_path = _strdup(path);
	tokens = strtok(copy_path, "=");
	/*printf("%s", tokens);*/

	tokens = strtok(NULL, ":");
	/*printf("%s", tokens);*/
	for (i = 0; tokens != NULL; i++)
	{
		_strcpy(store_pathtoks, tokens);
		/*printf("%s", store_pathtoks[i]);*/
		_strcat(store_pathtoks, "/");
		/*printf("%s", append_slash);*/
		_strcat(store_pathtoks, command);
		printf("%s", store_pathtoks);
		/*if (stat(append_ls, &st) == 0)
		{
			
		}*/
		tokens = strtok(NULL, ":");
	}
	return (store_pathtoks);
}

