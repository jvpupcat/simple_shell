#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#define DELIM "\n\t\r"

extern char **environ;
void prompt(void);

/* HELPER FUNCTIONS */
int _strlen(char *str);
char *_strcat(char *dest, char *src);
void _puts(char *str);
int _putchar(char c);
char *_strdup(char *str);
int _strcmp(char *s1, char *s2);

/* MAIN FUNCTIONS */
char *_getenv(const char *name);

/* BUILTIN FUNCTIONS */
/**
 * struct builtin_s - struct
 * @id: variable that finds a match
 * @function: function that matching variables call
 * Return: none
 **/
typedef struct builtin_s
{
	char *id;
	int (*function)();
} builtin_t;
void builtin_id(char *command);
int sh_exit(void);
int env(void);

#endif
