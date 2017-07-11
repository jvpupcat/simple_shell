#include "header.h"

/**
  * main - git line and print $
  * Return: 0 on sucess, -1 if not
  */

int main(void)
{
	char *ptr;
	size_t num;
	int success;

	printf("$ ");
	success = getline(&ptr, &num, stdin);
	if (success == -1)
		perror("getline");
	printf("%s", ptr);
	return (0);
}

