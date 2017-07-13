#include "header.h"

int main(void)
{
	char *ptr = _getenv("PATH");
	char *toks, *store[1024];
	int i;

	toks = strtok(ptr, ":");
	for (i = 0; toks != NULL; i++)
	{
		store[i] = toks;
	        toks = strtok(NULL, ":");
		printf("%s\n", store[i]);
	}
	return (0);
}
