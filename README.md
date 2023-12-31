# 0x16. C - Simple Shell
 **By Spencer Cheng, featuring Julien Barbier**
 Project to be done in teams of 2 people (your team: Guav Anemba,Joseph Otieno)

# Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

# General
Who designed and implemented the original Unix operating system
Who wrote the first version of the UNIX shell
Who invented the B programming language (the direct predecessor to the C programming language)
Who is Ken Thompson
How does a shell work
What is a pid and a ppid
How to manipulate the environment of the current process
What is the difference between a function and a system call
How to create processes
What are the three prototypes of main
How does the shell use the PATH to find the programs
How to execute another program with the execve system call
How to suspend the execution of a process until one of its children terminates
What is EOF / “end-of-file”?
# Requirements
#  General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
Your shell should not have any memory leaks
No more than 5 functions per file
All your header files should be include guarded
Use system calls only when you need to (why?)
# GitHub
*There should be one project repository per group. If you and your partner have a repository with the same name in both your accounts, you risk a 0% score. Add your partner as a collaborator. *

More Info
Output
Unless specified otherwise, your program must have the exact same output as sh (/bin/sh) as well as the exact same error output.
The only difference is when you print an error, the name of the program must be equivalent to your argv[0] (See below)
Example of error with sh:

$ echo "qwerty" | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo "qwerty" | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found
$
Same error with your program hsh:

$ echo "qwerty" | ./hsh
./hsh: 1: qwerty: not found
$ echo "qwerty" | ./././hsh
./././hsh: 1: qwerty: not found
$

# List of allowed functions and system calls
access (man 2 access)
chdir (man 2 chdir)
close (man 2 close)
closedir (man 3 closedir)
execve (man 2 execve)
exit (man 3 exit)
_exit (man 2 _exit)
fflush (man 3 fflush)
fork (man 2 fork)
free (man 3 free)
getcwd (man 3 getcwd)
getline (man 3 getline)
getpid (man 2 getpid)
isatty (man 3 isatty)
kill (man 2 kill)
malloc (man 3 malloc)
open (man 2 open)
opendir (man 3 opendir)
perror (man 3 perror)
read (man 2 read)
readdir (man 3 readdir)
signal (man 2 signal)
stat (__xstat) (man 2 stat)
lstat (__lxstat) (man 2 lstat)
fstat (__fxstat) (man 2 fstat)
strtok (man 3 strtok)
wait (man 2 wait)
waitpid (man 2 waitpid)
wait3 (man 2 wait3)
wait4 (man 2 wait4)
write (man 2 write)

# Compilation
## Your shell will be compiled this way:

`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh`


# files
README.md - description about the project repo
AUTHORS - file at the  root of your repository, listing all individuals having contributed content to the repository. 
main_shell.c: The main entry point of the shell program.
shell_header.h: Header file containing function prototypes and macros.
shell_main_loop.c: Implements the main loop of the shell, where user input is processed.
handle_builtin_commands.c: Handles built-in shell commands like "cd," "exit," etc.
buffer_chained_commands.c: Deals with managing and processing chained commands.
retrieve_history_files.c: Manages the history of executed commands.
parse_input.c: Parses user input into separate commands and arguments.
manage_variables.c: Manages environment variables and their values.
display_history_list.c: Displays the list of command history.
convert_to_integer.c: Converts strings to integers (utility function).
string_operations.c: Provides utility functions for string manipulation.
string_utilities.c: Contains additional string utility functions.
print_error_message.c: Prints error messages and handles error reporting.
print_environment.c: Displays the current environment variables.
initialize_info_struct.c: Initializes data structures and information needed by the shell.
linked_lists.c: Handles various linked list operations.
create_linked_list.c: Creates linked list data structures.
copy_string.c: Copies strings (utility function).
custom_realloc.c: Implements a custom memory reallocation function.
create_tokenizer.c: Tokenizes input strings.
manage_memory.c: Manages memory allocation and deallocation.
simple_shell_manual_page: Contains the manual or help page for the simple shell.
string_to_integer.c: Converts strings to integers (utility function).
handle_signals.c: Handles signals and interrupts in the shell.
 
## How to add Author file
`Bash script for generating the list of authors in git repo`
```
#!/bin/sh
