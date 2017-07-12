#include "header.h"

/**
 *
 *
 *
 **/
int main(void)
{
	int i = 0, status;
	size_t len = 0;
	char *tokens, *store_toks[1024];
	int store_execve;
	char *line = NULL;
	ssize_t read;
	pid_t pid;
	/*struct stat buf;*/

	/*fstat(STDIN_FILENO, &buf);

	switch (buf.st_mode & S_IFMT)
	{
		case S_IFCHR:
			printf("$ ");
			break;
		default:
			break;
	}*/
	/*if (S_IFCHR(buf.st_mode))
	{
		write(STDOUT_FILENO, &PROMPT, strlen(PROMPT));
	}*/
	/*printf("$ ");*/
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
		/*if (strcmp(store_toks[i], builtin.value) == 0)
		{
			something something;
		}*/
		pid = fork();
		if (pid == -1)
			perror("fork");
		if (pid == 0)
		{
			printf("in child process");
			store_execve = execve(store_toks[0], store_toks, NULL);
			free(line);
		}
		else
		{
			wait(&status);
		}
		printf("$ ");
	}
	free(line);
	return (0);
}
