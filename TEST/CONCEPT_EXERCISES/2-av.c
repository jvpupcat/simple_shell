#include <stdio.h>

/**
 * program that prints all the arguments without using ac
 * @av: argument vector
 * Return: 1 upon success
 **/
int main(int ac, char **av)
{
	int x;

	if (ac > 0)
	{
		for (x = 0; x < ac; x++)
			printf("%s\n", av[x]);
	}
	return (1);
}
