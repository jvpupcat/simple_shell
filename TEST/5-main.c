#include "header.h"

int main(void)
{
	char *token;
	ssize_t read;
	size_t len = 0;
	char *line = NULL;

	read = getline(&line, &len, stdin)
	if (read == -1)
		return (-1);

	while (read != -1)
	{
		token = _strtok(line);
	}
}
