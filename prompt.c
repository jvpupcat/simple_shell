#include "header.h"

/**
 * prompt - function that prints prompt
 *
 * Return: none
 **/
void prompt(void)
{
	char *prompt = "$ ";

	write(STD_FILENO, prompt, 2);
}
