#include "header.h"

/**
 * _strcmp - function that compares strings
 * @s1: first string
 * @s2: second string
 * Return: 0 upon success
 **/
int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
			return (-1);
		x++;
	}
	return (0);
}

/**
 * _strcpy - function that copies a string
 * @dest: s1
 * @src: s2
 * Return: a character
 **/
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}

/**
 * _memset - function that fills memory with a constand byte
 * @s: pointer to a memory block that will be filled
 * @b: the value to be stored
 * @n: number of bytes to be set
 * Return: char upon success
 **/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
