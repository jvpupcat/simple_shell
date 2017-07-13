#include "header.h"
/**
  * linked list env
  */

int main(void)
{
	char *ptr = _getenv("PATH");
	char *toks;
	env_v *store;

	store = malloc(sizeof(env_v));

	if (store == NULL)
		return (-1);


	toks = strtok(ptr, ":");
	while (toks != NULL && store->next != NULL)
	{
		store->name = "PATH";
		store->value = toks;
	        toks = strtok(NULL, ":");
	        store->next = toks;
		printf("the name is %s and directory is %s\n", store->name, store->value);
	}
	return (0);
}
