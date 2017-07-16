#include "header.h"

/**
 * main - program that calls in other functions
 *
 * Return: 0 upon success
 **/
int main(void)
{
	int i = 0, status;
	size_t len = 0;
	char *store_toks[1024],*tokens;
	int store_execve;
	char *line = NULL;
	ssize_t read;
	pid_t pid;

	prompt();
	while ((read = getline(&line, &len, stdin)) != -1)
	{
		tokens = strtok(line, " \n\t\r");
		i = 0;
		while (tokens != NULL)
		{
			store_toks[i] = tokens;
			tokens = strtok(NULL, " \n\t\r");
			i++;
		}
		store_toks[i] = NULL;
		builtin_id(store_toks[0]);
		/* CHECK BUILTINS */
		/*if (strcmp(store_toks[i], builtin.value) == 0)
		{
			something something;
		}*/
		pid = fork();
		if (pid == -1)
			perror("fork");
		if (pid == 0)
		{
			store_execve = execve(store_toks[0], store_toks, NULL);
			if (store_execve == -1)
				return (-1);
			free(line);
		}
		else
		{
			wait(&status);
		}
		prompt();
	}
	free(line);
	return (0);
}
