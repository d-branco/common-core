# 42 common core
Common Core repository from 42 school

## libft - current project

| Part      | library| function     |state| tests   |
|-----------|--------|--------------|-----|-------- |
| libc      |ctype.h | ft_isalpha   | X   | X  X  X |
| libc      |ctype.h | ft_isdigit   | X   | X  X  X |
| libc      |ctype.h | ft_isdigit   | X   | X  X  X |
| libc      |ctype.h | ft_isascii   | X   | X  X  X |
| libc      |ctype.h | ft_isprint   | X   | X  X  X |
| libc      |ctype.h | ft_toupper   | X   | X  X  X |
| libc      |ctype.h | ft_tolower   | X   | X  X  X |
| libc      |string.h| ft_strlen    | X   | X  X  X |
| libc      |string.h| ft_memset    | X   | X  X  X |
| libc      |string.h| ft_bzero     | _   | _  _  _ |
| libc      |string.h| ft_memcpy    | X   | X  X  X |
| libc      |string.h| ft_memmove   | _   | _  _  _ |
| libc      |string.h| ft_strlcpy   | _   | _  _  _ |
| libc      |string.h| ft_strlcat   | _   | _  _  _ |
| libc      |string.h| ft_strchr    | X   | X  X  X |
| libc      |string.h| ft_strrchr   | _   | _  _  _ |
| libc      |string.h| ft_strncmp   | _   | _  _  _ |
| libc      |string.h| ft_memchr    | _   | _  _  _ |
| libc      |string.h| ft_memcmp    | _   | _  _  _ |
| libc      |string.h| ft_strnstr   | _   | _  _  _ |
| libc      |stdlib.h| ft_atoi      | _   | _  _  _ |
| libc      |stdlib.h| ft_calloc    | _   | _  _  _ |
| libc      |stdlib.h| ft_strdup    | _   | _  _  _ |
| additional|        | ft_substr    | _   | _  _  _ |
| additional|        | ft_strjoin   | _   | _  _  _ |
| additional|        | ft_strtrim   | _   | _  _  _ |
| additional|        | ft_split     | _   | _  _  _ |
| additional|        | ft_itoa      | _   | _  _  _ |
| additional|        | ft_strmapi   | _   | _  _  _ |
| additional|        | ft_striteri  | _   | _  _  _ |
| additional|        | ft_putchar_fd| _   | _  _  _ |
| additional|        | ft_putstr_fd | _   | _  _  _ |
| additional|        | ft_putendl_fd| _   | _  _  _ |
| additional|        | ft_putnbr_fd | _   | _  _  _ |

	TODO Find a way to easily test a file as it is done.
		it ought to be tested for 
	TODO not having a main
	DONE following the norm
	TODO handling the NULL input
	DONE valgrind

## Makefile

##### you must submit a Makefile
	TODO it must compile all source files to the root with the flags:
	DONE FLAGS -Wall, -Wextra and -Werror, use cc, and
	TODO your Makefile must not relink.

#### Your Makefile must at least contain the rules
	DONE $(NAME),
	DONE all,
	DONE clean,
	DONE fclean and
	DONE re.

#### Norm
	TODO All source files you need to compile your project must be explicitly named in your Makefile.


# Cyphertext

## Original
found on the bottom of the LibFT pdf file.
>Rnpu cebwrpg bs gur 97 Pbzzba Pber pbagnvaf na rapbqrq uvag. Sbe rnpu pvepyr, bayl bar cebwrpg cebivqrf gur pbeerpg uvag arrqrq sbe gur arkg pvepyr. Guvf punyyratr vf vaqvivqhny, gurer vf bayl n cevmr sbe bar fghqrag jvaare cebivqvat nyy qrpbqrq rffntrf. Nal nqinagntrq crbcyr pna cynl, yvxr pheerag be sbezre fgnss, ohg gur cevmr jvyy erznva flzobyvp. Gur uvag sbe guvf svefg cebwrpg vf:
Ynetr pbjf trarebfvgl pbzrf jvgu punegf naq sbhe oybaqr ungf gb qrsl hccre tenivgl ureb

## Decrypted with `rot 18`

[rot 13 + 5](https://en.wikipedia.org/wiki/ROT13)

>Each project of the 42 Common Core contains an encoded hint. For each circle, only one project provides the correct hint needed for the next circle. This challenge is individual, there is only a prize for one student winner providing all decoded essages. Any advantaged people can play, like current or former staff, but the prize will remain symbolic. The hint for this first project is:

>Large cows generosity comes with charts and four blonde hats to defy upper gravity hero
