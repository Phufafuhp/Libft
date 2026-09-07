_This project has been created as part of the 42 curriculum by phufsomc._

# Description

Libft is a C library, containing various functions from the C standard library, and functions specifically made for the library

The functions are split into three sections:

## Part 1 - Libc functions

The following functions are reimplemented from the C standard library.

- ft\_isalpha - checks for an alphabetic character.
- ft\_isdigit - checks for a digit (0 through 9).
- ft\_isalnum - checks for an alphanumeric character.
- ft\_isascii - checks for a character that fits into the ASCII character set.
- ft\_isprint - checks for any printable character including space.
- ft\_strlen - calculates the length of a string.
- ft\_memset - fills memory with a constant byte.
- ft\_bzero - writes zero-valued bytes.
- ft\_memcpy - copies memory area.
- ft\_memmove - copies memory area, as though the bytes are first copied into a buffer.
- ft\_strlcpy - copies strings, size-bounded.
- ft\_strlcat - concatenates strings, size-bounded.
- ft\_toupper - converts the letter to upper case.
- ft\_tolower - converts the letter to lower case.
- ft\_strchr - locates the first occurence of a character in a string. 
- ft\_strrchr - locates the last occurence of a character in a string.
- ft\_strncmp - compares two strings, size-bounded.
- ft\_memchr - scans memory for a character.
- ft\_memcpy - copies memory area.
- ft\_strnstr - locates a substring in a string, size-bounded.
- ft\_atoi - converts a string to an integer.
- ft\_calloc - allocates memory, and set it to zero.

## Part 2 - Additional functions

The following functions are either not included in the C standard library, or exist in a different form.

- ft\_substr - allocates memory and returns a substring from a string.
- ft\_strjoin - allocates memory and returns a concatenated string.
- ft\_strtrim - allocates memory and returns a string trimmed from the beginning and end.
- ft\_split - allocates memory and returns an array of substrings, split from the original string.
- ft\_itoa - allocates memory and returns an integer converted from a string.
- ft\_strmapi - applies a function to each character of a string, and stores the altered string in allocated memory.
- ft\_striteri - applies a function to each character of a string.
- ft\_putchar\_fd - outputs a character to a specified file descriptor.
- ft\_putstr\_fd - outputs a string to a specified file descriptor.
- ft\_putendl\_fd - outputs a string to a specified file descriptor followed by a newline.
- ft\_putnbr\_fd - outputers an integer to a specified file descriptor.

## Part 3 - Linked list functions

The following functions are used to manipulate linked lists.

- ft\_lstnew - allocates memory and returns a new node.
- ft\_lstadd\_front - adds a new node to the beginning of a list.
- ft\_lstsize - counts the number of nodes in a list.
- ft\_lstlast - returns the last node of a list.
- ft\_lstadd\_back - adds a new node to the end of a list.
- ft\_lstdelone - frees the content of a node and the node itself from a list.
- ft\_lstclear - deletes and frees a node, and every node succeeding it.
- ft\_lstiter - applies a function to each node of a list.
- ft\_lstmap - applies a function to each node of a list, then returns the results as a new list.

# Instructions

This project is compiled by a Makefile. The following rules may be used to compile or otherwise manipulate the library.

- `make` compiles all files into object files, and into a static library.
- `make clean` deletes all object files.
- `make fclean` deletes all object files, and deletes the library file.
- `make re` is equivalent to `make fclean`, then `make all`; essentially recompiling the library.

# Resources

Various sources were used in the making of this project. Mainly, using the Linux terminal to acces manpages, sites like die.net's [Linux manual pages](https://linux.die.net/man/), [GeeksforGeeks](https://www.geeksforgeeks.org/), and the FreeBSD [Manual Pages Archives](https://man.freebsd.org/cgi/man.cgi).

No AI was used in the writing of this project's code[^1]. Little to no AI was used when researching for this project (the AI being Google's automatic AI overview). 

[^1]:I'm writing this with my very own hands. I have fingers and a working brain, and I will put them to good use.
