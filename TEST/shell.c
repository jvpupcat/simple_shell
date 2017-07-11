#include "header.h"

/**
  * main - simple shell
  * Return: completed command
  */

int main(int ac, char *av[])
{
	char *ptr, *tokens, *store[1024];
	size_t num;
	int i, status, success;
	pid_t pid;

	printf("$ ");
	while ((success = getline(&ptr, &num, stdin) != -1))
	{
		tokens = strtok(ptr," \n\t\r");
		for(i = 0; tokens != NULL; i++)
		{
			store[i] = tokens;
			tokens = strtok(NULL, " \n\t\r");
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
			wait(&status);
		}
	printf("$ ");
	}
	return (0);
}
