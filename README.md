## The StemShell

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
