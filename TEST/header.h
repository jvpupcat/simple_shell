#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
typedef struct environment_variable
{
	char *name;
	char *value;
	struct environment_variable *next;
} env_v;

extern char **environ;
void prompt(void);
char *_getenv(void);
/* HELPER FUNCTIONS */
int _strlen(char *str);

#endif
