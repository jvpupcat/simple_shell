#include "header.h"

/**
 * main - program that calls in other functions
 *
 * Return: 0 upon success
 **/
int main(void)
{
	int i, status, store_execve, read;
	size_t len = 0;
	char *store_toks[1024], *tokens, *found_path, *line = NULL;
	struct stat buf;
	pid_t pid;

	prompt(STDIN_FILENO, buf);
	while ((read = getline(&line, &len, stdin)) != -1)
	{
		if (_strcmp(line, "\n") == 0)
		{
			prompt(STDIN_FILENO, buf); continue;
		}
		tokens = strtok(line, "32\n\t\r");
		for (i = 0; tokens != NULL; i++)
		{
			store_toks[i] = tokens;
			tokens = strtok(NULL, "32\n\t\r");
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
			wait(&status);
		prompt(STDIN_FILENO, buf);
	}
	free(line); free(tokens);
	return (0);
}
