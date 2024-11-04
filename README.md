# 42 common core
Common Core repository from 42 school

## libft - current project

## CAN WE HAVE #include <stddef.h> IN THE HEADER?

| Part       | library  | function        | state | tests | desccription                                    |
|------------|----------|-----------------|-------|-------|-------------------------------------------------|
| Makefile   | -        | -               | D     | - - X | compiles instructions                           |
| libft.h    | -        | -               | D     | N - X | header                                          |
| libc       | string.h | ft_strlen       | D     | N V X | calculate the length of a string                |
| libc       | string.h | ft_memcpy       | D     | N V X | copy memory area                                |
| libc       | string.h | ft_memset       | D     | N V X | fill memory with a constant byte                |
| libc       | string.h | ft_bzero        | D     | N V X | zero a byte string                              |
| libc       | string.h | ft_memmove      | D     | M V X | copy memory area                                |
| libc       | string.h | ft_memcmp       | D     | N V X | compare memory areas                            |
| libc       | string.h | ft_memchr       | D     | M V X | scan memory for a character                     |
| libc       | ctype.h  | ft_isalpha      | D     | N V X | checks  for  an  alphabetic character           |
| libc       | ctype.h  | ft_isdigit      | D     | N V X | checks for a digit (0 through 9)                |
| libc       | ctype.h  | ft_isalnum      | D     | N V X | checks for an alphanumeric character            |
| libc       | ctype.h  | ft_isascii      | D     | N V X | checks for an ASCII character                   |
| libc       | ctype.h  | ft_isprint      | D     | N V X | checks for any printable characterq             |
| libc       | ctype.h  | ft_toupper      | D     | N V X | convert lowercase letters to uppercase          |
| libc       | ctype.h  | ft_tolower      | D     | N V X | convert uppercase letters to lowercase          |
| libc       | string.h | ft_strchr       | D     | N V X | locate character in string                      |
| libc       | string.h | ft_strrchr      | D     | N V X | locate character in string                      |
| libc       | string.h | ft_strlcat      | D     | N V X | size-bounded string concatenation               |
| libc       | string.h | ft_strlcpy      | D     | N V X | size-bounded string copying                     |
| libc       | stdlib.h | ft_atoi         | D     | N V X | converts a string to an integer                 |
| libc       | string.h | ft_strnstr      | D     | N V X | locate a substring in a string                  |
| libc       | string.h | ft_strncmp      | D     | N V X | compare two strings                             |
| libc       | stdlib.h | ft_calloc       | D     | N V X | allocate memory                                 |
| libc       | stdlib.h | ft_strdup       | D     | N V _ | duplicate a string                              |
| additional | -        | ft_substr       | D     | N V _ | finds substring in string                       |
| additional | -        | ft_strjoin      | D     | N V X | concatenates two strings                        |
| additional | -        | ft_putchar_fd   | D     | N V X | outputs a character to file descriptor          |
| additional | -        | ft_putstr_fd    | D     | N V X | outputs a string to file descriptor             |
| additional | -        | ft_putendl_fd   | D     | N V X | outputs a string and newline to file descriptor |
| additional | -        | ft_putnbr_fd    | D     | N V X | outputs an integer to file descriptor           |
| additional | -        | ft_strmapi      | D     | N V X | applies a function to each character by result  |
| additional | -        | ft_striteri     | D     | N V X | applies a function to each character by index   |
| additional | -        | ft_strtrim      | D     | N V X | trims begginning and end of string              |
| additional | -        | ft_split        | D     | N V _ | splits a string on a character                  |
| additional | -        | ft_itoa         | D     | N V X | converts ascii to integer                       |
| bonus      | list.h   | ft_lstnew       | D     | N V X | creates a new list                              |
| bonus      | list.h   | ft_lstdelone    | D     | N V X | removes list node                               |
| bonus      | list.h   | ft_lstclear     | D     | N V X | clears list                                     |
| bonus      | list.h   | ft_lstadd_front | D     | N V X | adds node to list top                           |
| bonus      | list.h   | ft_lstadd_back  | D     | N V X | adds node to list bottom                        |
| bonus      | list.h   | ft_lstsize      | D     | N V X | retrives number of nodes                        |
| bonus      | list.h   | ft_lstlast      | D     | N V X | retrives last node                              |
| bonus      | list.h   | ft_lstiter      | D     | N V X | iterates over list with function                |
| bonus      | list.h   | ft_lstmap       | D     | N V _ | maps a new list with function results           |

---

|symbol| legend               |
|   ---|---                   |
|    D |done                  |
|    - |non-aplicable         |
|    N |norminette approved   |
|    V |valgrind approved     |
|    X |personal tests aproved|
|    @ |current focus         |
|    _ |not started yet       |
|doing |working on parallel   |

---

	TODO Find a way to easily test a file as it is done.
		it ought to be tested for 
	DONE not having a main
	DONE following the norm
	TODO handling the NULL input
	DONE valgrind

## Makefile

#### you must submit a Makefile
	DONE it must compile all source files to the root with the flags:
		check the BONUS part on the subject
	DONE FLAGS -Wall, -Wextra and -Werror, use cc, and
	TODO your Makefile must not relink.

#### Your Makefile must at least contain the rules
	DONE $(NAME),
	DONE all,
	DONE clean,
	DONE fclean and
	DONE re.

#### Norm
	DONE All source files you need to compile your project must be explicitly named in your Makefile.

#### Evaluator's rumors
	No wildcards at all in the Makefile! or it's a straight 0!
		make --debug
		leaks, valgrind or e_fence agains memory leaks

#### Moulinette Rumors
	DONE Remove all shell commands from the Makefile
		The NORM refers that the Makefile is not checked by Moulinette. It's adderance to the norm is to be manually verified by the human evaluator.

# Cyphertext

## Original
found on the bottom of the LibFT pdf file.
>Rnpu cebwrpg bs gur 97 Pbzzba Pber pbagnvaf na rapbqrq uvag. Sbe rnpu pvepyr, bayl bar cebwrpg cebivqrf gur pbeerpg uvag arrqrq sbe gur arkg pvepyr. Guvf punyyratr vf vaqvivqhny, gurer vf bayl n cevmr sbe bar fghqrag jvaare cebivqvat nyy qrpbqrq rffntrf. Nal nqinagntrq crbcyr pna cynl, yvxr pheerag be sbezre fgnss, ohg gur cevmr jvyy erznva flzobyvp. Gur uvag sbe guvf svefg cebwrpg vf:
Ynetr pbjf trarebfvgl pbzrf jvgu punegf naq sbhe oybaqr ungf gb qrsl hccre tenivgl ureb

## Decrypted with `rot 18`

[rot 13 + 5](https://en.wikipedia.org/wiki/ROT13)

>Each project of the 42 Common Core contains an encoded hint. For each circle, only one project provides the correct hint needed for the next circle. This challenge is individual, there is only a prize for one student winner providing all decoded essages. Any advantaged people can play, like current or former staff, but the prize will remain symbolic. The hint for this first project is:

>Large cows generosity comes with charts and four blonde hats to defy upper gravity hero
