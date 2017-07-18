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
void prompt(void);

/* HELPER FUNCTIONS */
int _strlen(char *str);

/* MAIN FUNCTIONS */
int _strtok(char *str);

#endif
