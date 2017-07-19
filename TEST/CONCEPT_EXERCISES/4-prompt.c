#include "header.h"

/**
 * prompt - prints prompt
 *
 * Return: none

void prompt(void)
{
	printf("$ ");
}*/

/**
 * getline - function that prompts, waits for input, and prints it on next line
 *
 * Return: exit upon success
 **/
int main(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

	printf(PROMPT);
	while ((read = getline(&line, &len, stdin)))
	{
		if (read == -1)
			return (-1);
		printf("%s", line);
	}
	return (0);
}
