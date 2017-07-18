#include "header.h"

/**
 *
 *
 *
 **/
int main(void)
{
	int i, status;
	size_t len = 0;
	char *tokens, *store_toks[1024];
	char *line = NULL;
	ssize_t read;
	pid_t pid;
	struct stat buf;

	fstat(STDIN_FILENO, &buf);

	if ((S_ISCHR) st. mode)
	{
		write(STDOUT_FILENO, PROMPT, strlen(PROMPT));
	}
	/*printf("$ ");*/
	read = getline(&line, &len, stdin);
	if (read == -1)
		return (-1);
	/*while(line != NULL)*/
	{
		tokens = strtok(line, " \n\t\r");
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
			execve(store_toks[0], store_toks, NULL);
		else
			wait(&status);
	}
	return (0);
}
