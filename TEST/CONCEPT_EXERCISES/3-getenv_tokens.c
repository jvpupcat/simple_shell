#include "header.h"

int main(void)
{
	char *PathPtr = _getenv("PATH");
	char *token, *store_tok[1024];
	int i;

	token = strtok(PathPtr, ":");
	for (i = 0; token != NULL; i++)
	{
		store_tok[i] = token;
		token = strtok(NULL, ":");
		printf("%s\n", store_tok[i]);
	}
	return (0);
}
