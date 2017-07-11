#include "header.h"

/**
  * main - simple shell
  * Return: completed command
  */

int main(int ac, char *av[])
{
	char *ptr;
	size_t num;
	int success, i;
	char *store[1024], *tokens;
	pid_t pid;

	printf("$ ");
	success = getline(&ptr, &num, stdin);
	if (success == -1)
		perror("getline");

	tokens = strtok(ptr," ");
	for(i = 0; tokens != NULL; i++)
	{
		store[i] = tokens;
		tokens = strtok(NULL, " ");
	}
	pid = fork();
	if (pid == -1)
		perror("fork");
	if (pid == 0)
	{
		success = execve(store[0], store, NULL);
		if (success == -1)
			printf("Error\n");
	}
	else
	{
		wait(NULL);
	}
	return (0);
}
