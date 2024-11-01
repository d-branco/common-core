cmake_minimum_required(VERSION 3.27)
project(common_core)

set(CMAKE_CXX_STANDARD 14)

include_directories(libft)

add_executable(common_core
        libft/ft_atoi.c
        libft/ft_bzero.c
        libft/ft_calloc.c
        libft/ft_isalnum.c
        libft/ft_isalpha.c
        libft/ft_isascii.c
        libft/ft_isdigit.c
        libft/ft_isprint.c
        libft/ft_memchr.c
        libft/ft_memcmp.c
        libft/ft_memcpy.c
        libft/ft_memmove.c
        libft/ft_memset.c
        libft/ft_strchr.c
        libft/ft_strdup.c
        libft/ft_strlcat.c
        libft/ft_strlcpy.c
        libft/ft_strlen.c
        libft/ft_strncmp.c
        libft/ft_strnstr.c
        libft/ft_strrchr.c
        libft/ft_substr.c
        libft/ft_tolower.c
        libft/ft_toupper.c
        libft/libft.h
        libft/Makefile)
