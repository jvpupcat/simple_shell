#include "header.h"

/**
 *
 *
 *
 **/
int main(void)
{
	char *str = "The girl who fell in love with a bad boy.";
	char *tokens;

	tokens = strtok(str, " ");
	while (tokens != NULL)
	{
		printf("%s\n", tokens);
		tokens = strtok(NULL, " ");
	}
	return (0);
}
