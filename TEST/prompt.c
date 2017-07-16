#include "header.h"

/**
 * prompt - function that prints prompt
 *
 * Return: 0 upon success
 **/
void prompt(void)
{
	char prompt[] = "$ ";

	write(STDOUT_FILENO, prompt, 2);
}
