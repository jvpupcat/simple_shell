#include "header.h"

/**
  * main - count how many arguments
  * @ac: arg count
  * @av: different args
  */

int main (int ac, char *av[])
{
	int i;

	for(i = 0; av[i]; i++)
	{
		printf("%s\n", av[i]);
	}
	return (i);
}

