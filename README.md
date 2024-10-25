# 42 common core
Common Core repository from 42 school

## libft - current project

| Part       | library  | function      | state                | tests                                                        |
|------------|----------|---------------|----------------------|--------------------------------------------------------------|
| libc       | ctype.h  | ft_isalpha    | :white_check_mark:   | :white_check_mark::white_check_mark::white_check_mark:       |
| libc       | ctype.h  | ft_isdigit    | :white_check_mark:   | :white_check_mark::white_check_mark::white_check_mark:       |
| libc       | ctype.h  | ft_isdigit    | :white_check_mark:   | :white_check_mark::white_check_mark::white_check_mark:       |
| libc       | ctype.h  | ft_isascii    | :white_check_mark:   | :white_check_mark::white_check_mark::white_check_mark:       |
| libc       | ctype.h  | ft_isprint    | :white_check_mark:   | :white_check_mark::white_check_mark::white_check_mark:       |
| libc       | ctype.h  | ft_toupper    | :white_check_mark:   | :white_check_mark::white_check_mark::white_check_mark:       |
| libc       | ctype.h  | ft_tolower    | :white_check_mark:   | :white_check_mark::white_check_mark::white_check_mark:       |
| libc       | string.h | ft_strlen     | :white_check_mark:   | :white_check_mark::white_check_mark::white_check_mark:       |
| libc       | string.h | ft_memset     | :white_check_mark:   | :white_check_mark::white_check_mark::white_check_mark:       |
| libc       | string.h | ft_bzero      | :black_large_square: | :black_large_square::black_large_square::black_large_square: |
| libc       | string.h | ft_memcpy     | :white_check_mark:   | :white_check_mark::white_check_mark::white_check_mark:       |
| libc       | string.h | ft_memmove    | :black_large_square: | :black_large_square::black_large_square::black_large_square: |
| libc       | string.h | ft_strlcpy    | :black_large_square: | :black_large_square::black_large_square::black_large_square: |
| libc       | string.h | ft_strlcat    | :black_large_square: | :black_large_square::black_large_square::black_large_square: |
| libc       | string.h | ft_strchar    | :black_large_square: | :black_large_square::black_large_square::black_large_square: |
| libc       | string.h | ft_strrchr    | :black_large_square: | :black_large_square::black_large_square::black_large_square: |
| libc       | string.h | ft_strncmp    | :black_large_square: | :black_large_square::black_large_square::black_large_square: |
| libc       | string.h | ft_memchr     | :black_large_square: | :black_large_square::black_large_square::black_large_square: |
| libc       | string.h | ft_memcmp     | :black_large_square: | :black_large_square::black_large_square::black_large_square: |
| libc       | string.h | ft_strnstr    | :black_large_square: | :black_large_square::black_large_square::black_large_square: |
| libc       | stdlib.h | ft_atoi       | :black_large_square: | :black_large_square::black_large_square::black_large_square: |
| libc       | stdlib.h | ft_calloc     | :black_large_square: | :black_large_square::black_large_square::black_large_square: |
| libc       | stdlib.h | ft_strdup     | :black_large_square: | :black_large_square::black_large_square::black_large_square: |
| additional |          | ft_substr     | :black_large_square: | :black_large_square::black_large_square::black_large_square: |
| additional |          | ft_strjoin    | :black_large_square: | :black_large_square::black_large_square::black_large_square: |
| additional |          | ft_strtrim    | :black_large_square: | :black_large_square::black_large_square::black_large_square: |
| additional |          | ft_split      | :black_large_square: | :black_large_square::black_large_square::black_large_square: |
| additional |          | ft_itoa       | :black_large_square: | :black_large_square::black_large_square::black_large_square: |
| additional |          | ft_strmapi    | :black_large_square: | :black_large_square::black_large_square::black_large_square: |
| additional |          | ft_striteri   | :black_large_square: | :black_large_square::black_large_square::black_large_square: |
| additional |          | ft_putchar_fd | :black_large_square: | :black_large_square::black_large_square::black_large_square: |
| additional |          | ft_putstr_fd  | :black_large_square: | :black_large_square::black_large_square::black_large_square: |
| additional |          | ft_putendl_fd | :black_large_square: | :black_large_square::black_large_square::black_large_square: |
| additional |          | ft_putnbr_fd  | :black_large_square: | :black_large_square::black_large_square::black_large_square: |

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
