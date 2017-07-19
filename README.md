<<<<<<< HEAD
## The StemShell

<img src="https://gdcf-0916001bcltd.netdna-ssl.com/wp-content/uploads/2016/08/STEM-illustration.jpg?x18098">

The shell is a standard command line interpreter for the system. This project is meant to emulate a small part of what the shell does. For this assignment, we attempt to immitate how the shell searches for a command. The command we will be using throughout this project will be the ls command.

## Overview of the Shell

The shell is a command that reads lines from either a file or the terminal, interprets them, and executes other commands. The shell implements a language that has flow control constructs, a macro facility that provides a variety of features in addition to data storage, built-in history, and line editing capabilities. It incorporates many features to aid in interactive use and has the advantage of both interactive and non-interactive use. Commands can be typed directly to the running shell or can be put into a file and the file can be executed as long as permissions to run it are granted via chmod command.

## Overview of the StemShell

The Stemshell is an emulation of the Shell and attempts to take in the ls command. It features interactive and non-interactive use. The only command that can currently be typed directly to the running shell is the /bin/ls command. Flags can also be typed into the command line. 

For example:

```
$ /bin/ls
test.c test1.c
$ /bin/ls
-rw-rw-r-- 1 vagrant vagrant 122 July 12 23:47 test.c
-rw-rw-r-- 1 vagrant vagrant 122 July 12 23:47 test1.c
```
To use:

=======
# The StemShell

<img src="https://gdcf-0916001bcltd.netdna-ssl.com/wp-content/uploads/2016/08/STEM-illustration.jpg?x18098">

The shell is a standard command line interpreter for the system. This project is a Holberton School project meant teach students how to emulate a small part of what the shell does. For this assignment, we attempt to immitate how the shell searches for a command. The command we will be using throughout this project will be the ls command.

## Overview: Shell

The shell is a command that reads lines from either a file or the terminal, interprets them, and executes other commands. The shell implements a language that has flow control constructs, a macro facility that provides a variety of features in addition to data storage, built-in history, and line editing capabilities. It incorporates many features to aid in interactive use and has the advantage of both interactive and non-interactive use. Commands can be typed directly to the running shell or can be put into a file and the file can be executed as long as permissions to run it are granted via chmod command.

## Overview: StemShell

The Stemshell is an emulation of the Shell and attempts to take in and execute the ls command. It features interactive and non-interactive use. The only command that can currently be typed directly to the running shell is the /bin/ls command. Flags can also be typed into the command line and execution of that command is correct. 

To use:

```
vagrant@vagrant-ubuntu-trusty-64:~$ gcc -Wall -Werror -Wextra -pedantic simpleshell.c -o simpleshell
vagrant@vagrant-ubuntu-trusty-64:~$ ./simpleshell
$ 
```
1. Compile with `gcc -Wall -Werror -Wextra -pedantic *.c -o stemshell`
2. To run, type `./stemshell`
3. A prompt should appear. For Stemshell, the prompt is '$'
4. At the prompt, type in command `/bin/ls` or `/bin/ls -l`

For example:

```
$ /bin/ls
test.c test1.c
$ /bin/ls -l
-rw-rw-r-- 1 vagrant vagrant 122 July 12 23:47 test.c
-rw-rw-r-- 1 vagrant vagrant 122 July 12 23:47 test1.c
```
### Search and Execution
There are three types of commands: shell functions, builtin commands, and normal programs and the command is searched by name in that order. They are executed in different ways.

When the shell function is executed, all the shell positional parameters are set to the arguments of the shell function. In order for the shell to execute commands, it must first take in the arguments, tokenize, check for builtins and alias before forking to process the command.

Shell builtins are executed internally to the shell, without spawning a new process. Currently, the StemShell can only handle the builtin function exit and env.

## Requirements

```
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 14.04 LTS
* Your C programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* No more than 5 functions per file
* All your header files should be include guarded
```

### Allowed Functions

```
* access (man 2 access)
* chdir (man 2 chdir)
* close (man 2 close)
* closedir (man 3 closedir)
* execve (man 2 execve)
* exit (man 3 exit)
* fork (man 2 fork)
* free (man 3 free)
* stat (__xstat) (man 2 stat)
* lstat (__lxstat) (man 2 lstat)
* fstat (__fxstat) (man 2 fstat)
* getcwd (man 3 getcwd)
* getline (man 3 getline)
* kill (man 2 kill)
* malloc (man 3 malloc)
* open (man 2 open)
* opendir (man 3 opendir)
* perror (man 3 perror)
* read (man 2 read)
* readdir (man 3 readdir)
* signal (man 2 signal)
* strtok (man 3 strtok)
* wait (man 2 wait)
* waitpid (man 2 waitpid)
* wait3 (man 2 wait3)
* wait4 (man 2 wait4)
* write (man 2 write)
* _exit (man 2 _exit)
* isatty (man 3 isatty)
* fflush (man 3 fflush)
```

### Description of File Structure

0. [AUTHORS](AUTHORS) - Name of the authors who wrote the simple shell.
1. [header.h](header.h) - Header file that contains all structs, macros, standard library, and function prototypes.
2. [builtin_id.c](builtin_id.c) - file that contains the following builtin functions:
	* ``sh_exit`` - exits the shell.
	* ``env`` - prints the current environment.
3. [helper_functions.c](helper_functions.c) - file that contains the following helper functions:
	* ``_strlen`` - function that counts the length of a string.
	* ``_strcat`` - function that concatenates two strings.
	* ``_puts`` - function that prints 1 character at a time.
	* ``_putchar`` - function that prints 1 character at a time. Returns an int.
	* ``_strdup`` - function that returns pointer to a newly allocated space in memory.
4. [helper_functions2.c](helper_functions2.c) - file that contains the following helper functions:
	* ``_strcmp`` - function that compares strings.
5. [prompt.c](prompt.c) - function that prints the prompt "$".
6. []()
7. [man_1_simple_shell](man_1_simple_shell) - file that contains the man page for StemShell
8. [README.md](README.md) - files that contains the description for the assignment. Example of how to use Stemshell is included.

## Known Bugs
- [x] When enter is hit without any user input, shell segfaults
- [x] Memory leaks exist - check valgrind

## Authors
* **Joann Vuong** [LinkedIn](https://www.linkedin.com/in/joann-vuong-954b3220/)
* **Tope Agboola** [LinkedIn](https://www.linkedin.com/in/olatopeagboola/)
>>>>>>> baee0365aefb4fbef1e1b4a3fe74798298a35071
