#include "header.h"

/**
 * compare_line - function that compares stdin with \n
 * @str: variable that passes through function
 * Return: none
 **/
void compare_line(char *str)
{
	if (_strcmp(str, "\n") == 0)
	{
		prompt();
		continue;
	}
}
