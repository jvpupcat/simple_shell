## The StemShell

<img src="https://gdcf-0916001bcltd.netdna-ssl.com/wp-content/uploads/2016/08/STEM-illustration.jpg?x18098">

The shell is a standard command line interpreter for the system. This project is meant to emulate a small part of what the shell does. For this assignment, we attempt to immitate how the shell searches for a command. The command we will be using throughout this project will be the ls command.

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
1. Compile with `gcc -Wall -Werror -Wextra -pedantic simpleshell.c -o simpleshell`
2. To run, type `./simpleshell`
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
