#include "header.h"

int _which(list_t **head, const char *str)
{
	char *OrigPath = _getenv("PATH");
	char *CopyPath, *token, *store_tok[1024];
	int i;
	char *head;
	stat buf;

	head = NULL;

	CopyPath = _strcpy(CopyPath, OrigPath);

	token = strtok(CopyPath, ":");
	for (i = 0; token != NULL; i++)
	{
		store_tok[i] = add_nodeint_end(&head, token);
		if (list == NULL)
			return (NULL);
		token = strtok(NULL, ":");
		printf("%s\n", result);
	}
	return (0);
}
