#include "header.h"

/**
  * main- strtok
  * Return: array off tokens
  */

int main(void)
{
	char str[] = "Shell is fun";
	char *store[1024], *tokens;
	int i;

	tokens = strtok(str," ");
	for(i = 0; tokens != NULL; i++)
	{
		store[i] = tokens;
		tokens = strtok(NULL, " ");
		printf("%s\n", store[i]);
	}
	return (0);
}
