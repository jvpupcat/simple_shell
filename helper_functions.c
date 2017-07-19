#include "header.h"

/**
 * _strlen - function that counts the length of a string
 * @str: string that passes through function
 * Return: length
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
 * _strcat - function that concatenates two strings
 * @dest: s1
 * @src: s2
 * Return: pointer
 **/
char *_strcat(char *dest, char *src)
{
	int x;
	int dest_len = _strlen(dest);

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[dest_len + x] = src[x];
	}
	dest[dest_len + x] = '\0';
	return (dest);
}

/**
 * _puts - function that prints
 * @str: pointer
 * Return: none
 **/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strdup - function that returns pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @str: pointer to string
 * Return: pointer
 **/
char *_strdup(char *str)
{
	int x;
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) + 1 * _strlen(str));
	if (array == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < _strlen(str); x++)
	{
		array[x] = str[x];
	}
	array[x] = '\0';
	return (array);
}
