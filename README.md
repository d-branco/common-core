# 42 common core
Common Core repository from 42 school

## libft - current project

| Part     | library | function      |state| tests | desccription |
|----------|---------|---------------|-----|-------|--------------|
| Makefile |    -    |     -         |doing| - - _ |
|  libft.h |    -    |     -         |doing| N - _ |
|   libc   |string.h |ft_strlen      |  D  | N V X |
|   libc   |string.h |ft_memcpy      |  D  | N V X |
|   libc   |string.h |ft_memset      |  D  | N V X |
|   libc   |string.h |ft_bzero       |  D  | N V X |
|   libc   |string.h |ft_memmove     |  D  | M V X |copy memory area
|   libc   |string.h |ft_memcmp      |  D  | N V X |
|   libc   |string.h |ft_memchr      |  @  | _ _ _ |scan memory for a character
|   libc   |  ctype.h|ft_isalpha     |  D  | N V X |
|   libc   |  ctype.h|ft_isdigit     |  D  | N V X |
|   libc   |  ctype.h|ft_isalnum     |  D  | N V X |
|   libc   |  ctype.h|ft_isascii     |  D  | N V X |
|   libc   |  ctype.h|ft_isprint     |  D  | N V X |
|   libc   |  ctype.h|ft_toupper     |  D  | N V X |
|   libc   |  ctype.h|ft_tolower     |  D  | N V X |
|   libc   |string.h |ft_strchr      |  D  | N V X |
|   libc   |string.h |ft_strrchr     |  _  | _ _ _ |
|   libc   |string.h |ft_strlcat     |  _  | _ _ _ |
|   libc   |string.h |ft_strlcpy     |  _  | _ _ _ |
|   libc   | stdlib.h|ft_atoi        |  _  | _ _ _ |
|   libc   |string.h |ft_strnstr     |  _  | _ _ _ |
|   libc   |string.h |ft_strncmp     |  _  | _ _ _ |
|   libc   | stdlib.h|ft_calloc      |  _  | _ _ _ |
|   libc   | stdlib.h|ft_strdup      |  _  | _ _ _ |
|additional|    -    |ft_substr      |  _  | _ _ _ |
|additional|    -    |ft_strjoin     |  _  | _ _ _ |
|additional|    -    |ft_putchar_fd  |  _  | _ _ _ |
|additional|    -    |ft_putstr_fd   |  _  | _ _ _ |
|additional|    -    |ft_putendl_fd  |  _  | _ _ _ |
|additional|    -    |ft_putnbr_fd   |  _  | _ _ _ |
|additional|    -    |ft_strmapi     |  _  | _ _ _ |
|additional|    -    |ft_striteri    |  _  | _ _ _ |
|additional|    -    |ft_strtrim     |  _  | _ _ _ |
|additional|    -    |ft_split       |  _  | _ _ _ |
|additional|    -    |ft_itoa        |  _  | _ _ _ |
|   bonus  | list.h  |ft_lstnew      |  _  | _ _ _ |
|   bonus  | list.h  |ft_lstdelone   |  _  | _ _ _ |
|   bonus  | list.h  |ft_lstclear    |  _  | _ _ _ |
|   bonus  | list.h  |ft_lstadd_front|  _  | _ _ _ |
|   bonus  | list.h  |ft_lstadd_back |  _  | _ _ _ |
|   bonus  | list.h  |ft_lstsize     |  _  | _ _ _ |
|   bonus  | list.h  |ft_lstlast     |  _  | _ _ _ |
|   bonus  | list.h  |ft_lstiter     |  _  | _ _ _ |
|   bonus  | list.h  |ft_lstmap      |  _  | _ _ _ |

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
	TODO it must compile all source files to the root with the flags:
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
	TODO All source files you need to compile your project must be explicitly named in your Makefile.

#### Evaluator's rumors
	No wildcards at all in the Makefile! or it's a straight 0!
		make --debug
		leaks, valgrind or e_fence agains memory leaks

#### Moulinette Rumors
	TODO Remove all shell commands from the Makefile
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
