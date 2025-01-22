# 42 common core
Common Core repository from 42 school

### current project - Born2beroot

# Rank 1
## ft_printf
Duration: circa 96 hours.

#### Suggestions
 - Don't do the bonus part unless you have a lot of time. It's fun, though.

#### File structure
```
project_name/
├── Makefile
├── ft_printf.c
├── libftprintf.h
├── libft/
│   ├── Makefile
│   ├── libft.h
│   ├── ft_putchr.c
│   ├── ft_putstr.c
│   └── ...
└── subject-ft_printf.pdf
```
#### Evaluation
<details>
  <summary>graded 125 on ft_printf</summary>

```
test_spdxiucpercent: 8/8 correct functions
bonus_one: 3/3 correct functions
bonus_two: 3/3 correct functions
```
<picture>
  <img alt="Shows success. 125 out of 100." src=evaluation-libft.png>
</picture><br>
</details>

## get_next_line
Duration: circa 54 hours.

#### Suggestions
Do the bonus. There's a trivial way to do it.

#### Evaluation
<details>
  <summary>graded 125 on get_next_line</summary>

```
basic_tests: GNL OK | bonus_tests: GNL OK
```

<picture>
  <img alt="Shows success. 125 out of 100." src=evaluation-libft.png>
</picture><br>
</details>

## Born2beroot
currently working on.

# Rank 0
## libft 
Duration: circa 74 hours.

#### Suggestions
   File   | Suggested alteration
|----|---|
 ft_calloc.c | use ft_bzero() instead of ft_memset()
 ft_itoa.c   | recursive instead of iterative.

#### Evaluation
<details>
  <summary>graded 125 on Libft</summary>

```
initial_errors:
test_ft_isalpha: OK    | test_ft_isdigit: OK   | test_ft_isalnum: OK
test_ft_isascii: OK    | test_ft_isprint: OK   | test_ft_strlen: OK
test_ft_memset: OK     | test_ft_bzero: OK     | test_ft_memcpy: OK
test_ft_memmove: OK    | test_ft_strlcpy: OK   | test_ft_strlcat: OK
test_ft_toupper: OK    | test_ft_tolower: OK   | test_ft_strchr: OK
test_ft_strrchr: OK    | test_ft_strncmp: OK   | test_ft_memchr: OK
test_ft_memcmp: OK     | test_ft_strnstr: OK   | test_ft_atoi: OK
test_ft_calloc: OK     | test_ft_strdup: OK    | test_ft_substr: OK
test_ft_strjoin: OK    | test_ft_strtrim: OK   | test_ft_split: OK
test_ft_itoa: OK       | test_ft_strmapi: OK   | test_ft_striteri: OK
test_ft_putchar_fd: OK | test_ft_putstr_fd: OK
test_ft_putendl_fd: OK | test_ft_putnbr_fd: OK
bonus: 9/9 functions correct
```

<picture>
  <img alt="Shows success. 125 out of 100." src=evaluation-libft.png>
</picture><br>
</details>
