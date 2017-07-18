#include "header.h"

/**
  * main - simple shell
  * Return: completed command
  */

int main(int ac, char *av[])
{
	char *ptr,*buf, *hold *tokens, *path, *dirTok *store[1024];
	size_t num;
	int i,j, status, success;
	pid_t pid;
	struct stat st;

	prompt();
	success = getline(&ptr, &num, stdin);
	while (success != -1)
	{
		tokens = strtok(ptr," \n\t\r");
		for(i = 0; tokens != NULL; i++)
		{
			store[i] = tokens;
			tokens = strtok(NULL, " \n\t\r");
		}
		store[i] = NULL;
		path = _getenv("PATH");
		for(j = 0; path[j]; j++)
			;
		buf = malloc(sizeof(char) * j);
		if buf = NULL
			return (-1);
		dirTok = strtok(path, ":");
		for(i = 0; dirTok != NULL; i++)
		{
			buf[j] = dirTok;
			dirTok = strtok(NULL, ":");
		}
		if(store[0] 
			for(i = 0; i < j; i++)
			{
				hold = _strcat(buf[i], "/");	
				hold = _strcat(buf[i], store[0]);
				if (stat(hold, &st) == -1)
				{
					perror(stat);
					free (buf);
					exit(EXIT_FAILURE);
				}
			}

		pid = fork();
		if (pid == -1)
			perror("fork");
		if (pid == 0)
		{
			success = execve(store[0], store, NULL);
			if (success == -1)
			{
				perror(execve);
				free (buf);
				exit(EXIT_FAILURE);
			}
		}
		else
		{
			wait(&status);
		}
	prompt();
	}
	return (0);
}
