#include "header.h"

/**
 *
 *
 *
 **/
int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * _puts - function that prints
 * @str: pointer
 * Return: none
 **/
void _puts(char *str)
{
        while (*str != '\0')
        {
                _putchar(*str);
                str++;
        }
        _putchar('\n');
}
