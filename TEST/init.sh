#!/bin/bash

USER_REPO="$1"_simple_shell

# Change working directory to user root
cd

# Clone your simple shell repo
git clone https://github.com/jvpupcat/simple_shell $USER_REPO

# Create your executable
gcc -Wall -Werror -Wextra -pedantic TEST/*.c -o hsh

# Remove unneeded source code
rm -rf $USER_REPO

# Move executable into the test suite
mv hsh shellgame

# Change your working directory to the test suite
cd shellgame

# Run the test suite
./shellgame.bash
