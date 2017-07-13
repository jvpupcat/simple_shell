#include "header.h"

int main (int ac, char **av, char **env)
{

	extern char **environ;

	int i;
	for(i = 0; environ[i]; i++)
	{
		printf("%s\n", environ[i]);
	}
	for(i = 0; env[i]; i++)
	{
		printf("%s\n", env[i]);
	}
}

