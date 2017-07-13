#include "header.h" 
/**
 * printPrompt - prints prompt to stdout
 * Return: On success 1.
 */
void prompt(void)
{
	char prompt[] = "$ ";
	
	write(STDOUT_FILENO, prompt, 2);
}
