# 42 common core
Common Core repository from 42 school

## libft - current project

|Part      |library  | function    | state | tests|
|----------|---------|-------------|-------|------|
|libc      |ctype.h  |ft_isalpha   | DONE  | DONE |
|libc      |ctype.h  |ft_isdigit   | DONE  | DONE |
|libc      |ctype.h  |ft_isdigit   | DONE  | DONE |
|libc      |ctype.h  |ft_isascii   | TODO  | TODO |
|libc      |ctype.h  |ft_isprint   | TODO  | TODO |
|libc      |ctype.h  |ft_toupper   | TODO  | TODO |
|libc      |ctype.h  |ft_tolower   | TODO  | TODO |
|libc      |string.h |ft_strlen    | TODO  | TODO |
|libc      |string.h |ft_memset    | TODO  | TODO |
|libc      |string.h |ft_bzero     | TODO  | TODO |
|libc      |string.h |ft_memcpy    | TODO  | TODO |
|libc      |string.h |ft_memmove   | TODO  | TODO |
|libc      |string.h |ft_strlcpy   | TODO  | TODO |
|libc      |string.h |ft_strlcat   | TODO  | TODO |
|libc      |string.h |ft_strchar   | TODO  | TODO |
|libc      |string.h |ft_strrchr   | TODO  | TODO |
|libc      |string.h |ft_strncmp   | TODO  | TODO |
|libc      |string.h |ft_memchr    | TODO  | TODO |
|libc      |string.h |ft_memcmp    | TODO  | TODO |
|libc      |string.h |ft_strnstr   | TODO  | TODO |
|libc      |stdlib.h |ft_atoi      | TODO  | TODO |
|libc      |stdlib.h |ft_calloc    | TODO  | TODO |
|libc      |stdlib.h |ft_strdup    | TODO  | TODO |
|additional|         |ft_substr    | TODO  | TODO |
|additional|         |ft_strjoin   | TODO  | TODO |
|additional|         |ft_strtrim   | TODO  | TODO |
|additional|         |ft_split     | TODO  | TODO |
|additional|         |ft_itoa      | TODO  | TODO |
|additional|         |ft_strmapi   | TODO  | TODO |
|additional|         |ft_striteri  | TODO  | TODO |
|additional|         |ft_putchar_fd| TODO  | TODO |
|additional|         |fft_putstr_fd| TODO  | TODO |
|additional|         |ft_putendl_fd| TODO  | TODO |
|additional|         |ft_putnbr_fd | TODO  | TODO |

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
