#include "header.h"

/**
 * prompt - function that prints prompt
 *
 * Return: 0 upon success
 **/
void prompt(int fd, struct stat buf)
{
	fstat(fd, &buf);

	if (S_ISCHR(buf.st_mode))
		_puts_prompt(PROMPT);
}
