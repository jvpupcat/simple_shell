#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#define PROMPT "$ "
#define DELIM "\n\t\r"

extern char **environ;

/* HELPER FUNCTIONS */
int _strlen(char *str);
char *_strcat(char *dest, char *src);
void _puts(char *str);
int _putchar(char c);
char *_strdup(char *str);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
char *_memset(char *s, char b, unsigned int n);
void _puts_prompt(char *str);

/* MAIN FUNCTIONS */
void prompt(int fd, struct stat buf);
void builtin_id(char *command);
char *_which(char *command);
char *_getenv(const char *name);
char **copy_env(char **original_env);

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
int sh_exit(void);
int env(void);

#endif
