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
	char *store_toks[1024], *tokens, *found_path;
	int store_execve;
	char *line = NULL;
	ssize_t read;
	pid_t pid;

	prompt();
	while ((read = getline(&line, &len, stdin)) != -1)
	{
		if (_strcmp(line, "\n") == 0)
		{
			prompt();
			continue;
		}
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
		found_path = _which(line);
		if (found_path == NULL)
			found_path = line;
		pid = fork();
		if (pid == -1)
			perror("fork");
		if (pid == 0)
		{
			store_execve = execve(found_path, store_toks, NULL);
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
