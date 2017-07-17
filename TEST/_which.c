#include "header.h"

/**
 * _which - function that checks for user permission
 * @filename: files that need to be checked
 * Return: NULL
 **/
char *_which(char *command)
{
	char *path, *tokens, *store_pathtoks[1024];
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
		store_pathtoks[i] = _strcpy(store_pathtoks[i], tokens);
		/*printf("%s", store_pathtoks[i]);*/
		append_slash = _strcat(store_pathtoks[i], "/");
		/*printf("%s", append_slash);*/
		append_ls = _strcat(append_slash, command);
		printf("%s", append_ls);
		/*if (stat(append_ls, &st) == 0)
		{
			
		}*/
		tokens = strtok(NULL, ":");
	}
	return (store_pathtoks[i]);
}

