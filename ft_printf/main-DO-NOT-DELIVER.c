/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main-DO-NOT-DELIVER.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:19:10 by abessa-m          #+#    #+#             */
/*   Updated: 2025/01/08 17:04:39 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//usage:
//	make re && cc main-DO-NOT-DELIVER.c libftprintf.a && ./a.out ; make fclean

// other tests:
//	cd ft_printftest-master2/; make; cd ..; clear; ./ft_printftest-master2/test 
//	make re; ./tests/tester 
//	make re; cd printfTester-master/; make a; cd ..

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int	i;
	int	j;

	ft_printf("===================== Mandatory conversion (just text)"
			" =====================\n");
	ft_printf("ft_printf(\"Forty two\") <");
	i = ft_printf("Forty two");
	printf("> (return: %i)\n   printf(\"Forty two\") <", i);
	j = printf("Forty two");
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(NULL) <");
	i = ft_printf(NULL);
	printf("> (return: %i)\n   printf(NULL) <", i);
	j = printf(NULL);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"\") <");
	i = ft_printf("");
	printf("> (return: %i)\n   printf(\"\") <", i);
	j = printf("");
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"\\nAs armas e os baroes assinalados, \\n Que da ocidental praia Lusitana, \\n Por mares nunca dantes navegados, \\n Passaram ainda alem da Taprobana. \") <");
	i = ft_printf("\nAs armas e os baroes assinalados, \n Que da ocidental praia Lusitana, \n Por mares nunca dantes navegados, \n Passaram ainda alem da Taprobana. ");
	printf("> (return: %i)\n   printf(\"\\nAs armas e os baroes assinalados, \\n Que da ocidental praia Lusitana, \\n Por mares nunca dantes navegados, \\n Passaram ainda alem da Taprobana. \") <", i);
	j = printf("\nAs armas e os baroes assinalados, \n Que da ocidental praia Lusitana, \n Por mares nunca dantes navegados, \n Passaram ainda alem da Taprobana. ");
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);	
	ft_printf("===================== Mandatory conversion %%c character"
			" =====================\n");
	ft_printf("ft_printf(\"Testing %%c character\", \'A\') <");
	i = ft_printf("Testing %c character", 'A');
	printf("> (return: %i)\n   printf(\"Testing %%c character\", \'A\') <", i);
	j = printf("Testing %c character", 'A');
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"%%c\", NULL) <");
	i = ft_printf("%c", NULL);
	printf("> (return: %i)\n   printf(\"%%c\", NULL) <", i);
	j = printf("%c", NULL);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"%%c\", \'0\') <");
	i = ft_printf("%c", '0');
	printf("> (return: %i)\n   printf(\"%%c\", \'0\') <", i);
	j = printf("%c", '0');
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Special chars: %%c%%c%%c%%c\", '!', '@', '#', '$') <");
	i = ft_printf("Special chars: %c%c%c%c", '!', '@', '#', '$');
	printf("> (return: %i)\n   printf(\"Special chars: %%c%%c%%c%%c\", '!', '@', '#', '$') <", i);
	j = printf("Special chars: %c%c%c%c", '!', '@', '#', '$');
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Multiple %%c and %%c with text %%c between %%c\", 'A', 'B', 'C', 'D') <");
	i = ft_printf("Multiple %c and %c with text %c between %c", 'A', 'B', 'C', 'D');
	printf("> (return: %i)\n   printf(\"Multiple %%c and %%c with text %%c between %%c\", 'A', 'B', 'C', 'D') <", i);
	j = printf("Multiple %c and %c with text %c between %c", 'A', 'B', 'C', 'D');
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("===================== Mandatory conversion %%s string"
	" =====================\n");
	ft_printf("ft_printf(\"Testing %%s string\", \"42 Porto\") <");
	i = ft_printf("Testing %s string", "42 Porto");
	printf("> (return: %i)\n   printf(\"Testing %%s string\", \"42 Porto\") <", i);
	j = printf("Testing %s string", "42 Porto");
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"%%s\", NULL) <");
	i = ft_printf("%s", NULL);
	printf("> (return: %i)\n   printf(\"%%s\", NULL) <", i);
	j = printf("%s", NULL);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"%%s\", \"Simple string\") <");
	i = ft_printf("%s", "Simple string");
	printf("> (return: %i)\n   printf(\"%%s\", \"Simple string\") <", i);
	j = printf("%s", "Simple string");
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"%%s is empty string\", \"\") <");
	i = ft_printf("%s is empty string", "");
	printf("> (return: %i)\n   printf(\"%%s is empty string\", \"\") <", i);
	j = printf("%s is empty string", "");
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Multiple strings: %%s %%s %%s\", \"first\", \"second\", \"third\") <");
	i = ft_printf("Multiple strings: %s %s %s", "first", "second", "third");
	printf("> (return: %i)\n   printf(\"Multiple strings: %%s %%s %%s\", \"first\", \"second\", \"third\") <", i);
	j = printf("Multiple strings: %s %s %s", "first", "second", "third");
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Mix with text: %%s between %%s\", \"string1\", \"string2\") <");
	i = ft_printf("Mix with text: %s between %s", "string1", "string2");
	printf("> (return: %i)\n   printf(\"Mix with text: %%s between %%s\", \"string1\", \"string2\") <", i);
	j = printf("Mix with text: %s between %s", "string1", "string2");
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("===================== Mandatory conversion %%p pointer"
			" =====================\n");
	int a = 42;
	int *ptr_a = &a;
	ft_printf("ft_printf(\"Pointer to int: %%p\", (int *)ptr_a) <");
	i = ft_printf("Pointer to int: %p", (int *)ptr_a);
	printf("> (return: %i)\n   printf(\"Pointer to int: %%p\", (int *)ptr_a) <", i);
	j = printf("Pointer to int: %p", (int *)ptr_a);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Null pointer: %%p\", NULL) <");
	i = ft_printf("Null pointer: %p", NULL);
	printf("> (return: %i)\n   printf(\"Null pointer: %%p\", NULL) <", i);
	j = printf("Null pointer: %p", NULL);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	char *str = "Hello";
	ft_printf("ft_printf(\"Pointer to string: %%p\", (char *)str) <");
	i = ft_printf("Pointer to string: %p", (char *)str);
	printf("> (return: %i)\n   printf(\"Pointer to string: %%p\", (char *)str) <", i);
	j = printf("Pointer to string: %p", (void *)str);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	int arr[3] = {1, 2, 3};
	ft_printf("ft_printf(\"Pointer to array: %%p\", (int *)arr) <");
	i = ft_printf("Pointer to array: %p", (int *)arr);
	printf("> (return: %i)\n   printf(\"Pointer to array: %%p\", (int *)arr) <", i);
	j = printf("Pointer to array: %p", (int *)arr);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("===================== Mandatory conversion %%d decimal"
			" =====================\n");

	ft_printf("ft_printf(\"Positive integer: %%d\", 42) <");
	i = ft_printf("Positive integer: %d", 42);
	printf("> (return: %i)\n   printf(\"Positive integer: %%d\", 42) <", i);
	j = printf("Positive integer: %d", 42);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"%%d\", NULL) <");
	i = ft_printf("%d", NULL);
	printf("> (return: %i)\n   printf(\"%%d\", NULL) <", i);
	j = printf("%d", NULL);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Negative integer: %%d\", -42) <");
	i = ft_printf("Negative integer: %d", -42);
	printf("> (return: %i)\n   printf(\"Negative integer: %%d\", -42) <", i);
	j = printf("Negative integer: %d", -42);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Zero: %%d\", 0) <");
	i = ft_printf("Zero: %d", 0);
	printf("> (return: %i)\n   printf(\"Zero: %%d\", 0) <", i);
	j = printf("Zero: %d", 0);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Maximum int: %%d\", %%d) <", INT_MAX);
	i = ft_printf("Maximum int: %d", INT_MAX);
	printf("> (return: %i)\n   printf(\"Maximum int: %%d\", %%d) <", i);
	j = printf("Maximum int: %d", INT_MAX);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Minimum int: %%d\", %%d) <", INT_MIN);
	i = ft_printf("Minimum int: %d", INT_MIN);
	printf("> (return: %i)\n   printf(\"Minimum int: %%d\", %%d) <", i);
	j = printf("Minimum int: %d", INT_MIN);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Multiple integers: %%d %%d %%d\", 1, -1, 0) <");
	i = ft_printf("Multiple integers: %d %d %d", 1, -1, 0);
	printf("> (return: %i)\n   printf(\"Multiple integers: %%d %%d %%d\", 1, -1, 0) <", i);
	j = printf("Multiple integers: %d %d %d", 1, -1, 0);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Mix with text: %%d is the answer\", 42) <");
	i = ft_printf("Mix with text: %d is the answer", 42);
	printf("> (return: %i)\n   printf(\"Mix with text: %%d is the answer\", 42) <", i);
	j = printf("Mix with text: %d is the answer", 42);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("===================== Mandatory conversion %%i integer"
			" =====================\n");

	ft_printf("ft_printf(\"Positive integer: %%d\", 42) <");
	i = ft_printf("Positive integer: %d", 42);
	printf("> (return: %i)\n   printf(\"Positive integer: %%d\", 42) <", i);
	j = printf("Positive integer: %d", 42);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"%%i\", NULL) <");
	i = ft_printf("%i", NULL);
	printf("> (return: %i)\n   printf(\"%%i\", NULL) <", i);
	j = printf("%i", NULL);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Negative integer: %%d\", -42) <");
	i = ft_printf("Negative integer: %d", -42);
	printf("> (return: %i)\n   printf(\"Negative integer: %%d\", -42) <", i);
	j = printf("Negative integer: %d", -42);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Zero: %%d\", 0) <");
	i = ft_printf("Zero: %d", 0);
	printf("> (return: %i)\n   printf(\"Zero: %%d\", 0) <", i);
	j = printf("Zero: %d", 0);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Maximum int: %%d\", %%d) <", INT_MAX);
	i = ft_printf("Maximum int: %d", INT_MAX);
	printf("> (return: %i)\n   printf(\"Maximum int: %%d\", %%d) <", i);
	j = printf("Maximum int: %d", INT_MAX);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Minimum int: %%d\", %%d) <", INT_MIN);
	i = ft_printf("Minimum int: %d", INT_MIN);
	printf("> (return: %i)\n   printf(\"Minimum int: %%d\", %%d) <", i);
	j = printf("Minimum int: %d", INT_MIN);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Multiple integers: %%d %%d %%d\", 1, -1, 0) <");
	i = ft_printf("Multiple integers: %d %d %d", 1, -1, 0);
	printf("> (return: %i)\n   printf(\"Multiple integers: %%d %%d %%d\", 1, -1, 0) <", i);
	j = printf("Multiple integers: %d %d %d", 1, -1, 0);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Mix with text: %%d is the answer\", 42) <");
	i = ft_printf("Mix with text: %d is the answer", 42);
	printf("> (return: %i)\n   printf(\"Mix with text: %%d is the answer\", 42) <", i);
	j = printf("Mix with text: %d is the answer", 42);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("===================== Mandatory conversion %%u unsigned integer"
			" =====================\n");
	ft_printf("ft_printf(\"Positive unsigned integer: %%u\", 42) <");
	i = ft_printf("Positive unsigned integer: %u", 42);
	printf("> (return: %i)\n   printf(\"Positive unsigned integer: %%u\", 42) <", i);
	j = printf("Positive unsigned integer: %u", 42);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"%%u\", NULL) <");
	i = ft_printf("%u", NULL);
	printf("> (return: %i)\n   printf(\"%%u\", NULL) <", i);
	j = printf("%u", NULL);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Zero: %%u\", 0) <");
	i = ft_printf("Zero: %u", 0);
	printf("> (return: %i)\n   printf(\"Zero: %%u\", 0) <", i);
	j = printf("Zero: %u", 0);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Maximum unsigned int: %%u\", %%u) <", UINT_MAX);
	i = ft_printf("Maximum unsigned int: %u", UINT_MAX);
	printf("> (return: %i)\n   printf(\"Maximum unsigned int: %%u\", %%u) <", i);
	j = printf("Maximum unsigned int: %u", UINT_MAX);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Small unsigned integer: %%u\", 1) <");
	i = ft_printf("Small unsigned integer: %u", 1);
	printf("> (return: %i)\n   printf(\"Small unsigned integer: %%u\", 1) <", i);
	j = printf("Small unsigned integer: %u", 1);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Multiple unsigned integers: %%u %%u %%u\", 1, 2, 3) <");
	i = ft_printf("Multiple unsigned integers: %u %u %u", 1, 2, 3);
	printf("> (return: %i)\n   printf(\"Multiple unsigned integers: %%u %%u %%u\", 1, 2, 3) <", i);
	j = printf("Multiple unsigned integers: %u %u %u", 1, 2, 3);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Mix with text: %%u is the answer\", 42) <");
	i = ft_printf("Mix with text: %u is the answer", 42);
	printf("> (return: %i)\n   printf(\"Mix with text: %%u is the answer\", 42) <", i);
	j = printf("Mix with text: %u is the answer", 42);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("===================== Mandatory conversion %%x hexadecimal"
			" =====================\n");
	ft_printf("ft_printf(\"Positive unsigned integer in hex: %%x\", 42) <");
	i = ft_printf("Positive unsigned integer in hex: %x", 42);
	printf("> (return: %i)\n   printf(\"Positive unsigned integer in hex: %%x\", 42) <", i);
	j = printf("Positive unsigned integer in hex: %x", 42);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"%%x\", NULL) <");
	i = ft_printf("%x", NULL);
	printf("> (return: %i)\n   printf(\"%%x\", NULL) <", i);
	j = printf("%x", NULL);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Zero in hex: %%x\", 0) <");
	i = ft_printf("Zero in hex: %x", 0);
	printf("> (return: %i)\n   printf(\"Zero in hex: %%x\", 0) <", i);
	j = printf("Zero in hex: %x", 0);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Maximum unsigned int in hex: %%x\", %%x) <", UINT_MAX);
	i = ft_printf("Maximum unsigned int in hex: %x", UINT_MAX);
	printf("> (return: %i)\n   printf(\"Maximum unsigned int in hex: %%x\", %%x) <", i);
	j = printf("Maximum unsigned int in hex: %x", UINT_MAX);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Small unsigned integer in hex: %%x\", 1) <");
	i = ft_printf("Small unsigned integer in hex: %x", 1);
	printf("> (return: %i)\n   printf(\"Small unsigned integer in hex: %%x\", 1) <", i);
	j = printf("Small unsigned integer in hex: %x", 1);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Multiple unsigned integers in hex: %%x %%x %%x\", 1, 2, 3) <");
	i = ft_printf("Multiple unsigned integers in hex: %x %x %x", 1, 2, 3);
	printf("> (return: %i)\n   printf(\"Multiple unsigned integers in hex: %%x %%x %%x\", 1, 2, 3) <", i);
	j = printf("Multiple unsigned integers in hex: %x %x %x", 1, 2, 3);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Mix with text: %%x is the answer\", 42) <");
	i = ft_printf("Mix with text: %x is the answer", 42);
	printf("> (return: %i)\n   printf(\"Mix with text: %%x is the answer\", 42) <", i);
	j = printf("Mix with text: %x is the answer", 42);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Hexadecimal of 255: %%x\", 255) <");
	i = ft_printf("Hexadecimal of 255: %x", 255);
	printf("> (return: %i)\n   printf(\"Hexadecimal of 255: %%x\", 255) <", i);
	j = printf("Hexadecimal of 255: %x", 255);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Hexadecimal of 4096: %%x\", 4096) <");
	i = ft_printf("Hexadecimal of 4096: %x", 4096);
	printf("> (return: %i)\n   printf(\"Hexadecimal of 4096: %%x\", 4096) <", i);
	j = printf("Hexadecimal of 4096: %x", 4096);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);	ft_printf("===================== Mandatory conversion %%X hexadecimal"
			" =====================\n");
	ft_printf("ft_printf(\"Positive unsigned integer in hex: %%X\", 42) <");
	i = ft_printf("Positive unsigned integer in hex: %X", 42);
	printf("> (return: %i)\n   printf(\"Positive unsigned integer in hex: %%X\", 42) <", i);
	j = printf("Positive unsigned integer in hex: %X", 42);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"%%X\", NULL) <");
	i = ft_printf("%X", NULL);
	printf("> (return: %i)\n   printf(\"%%X\", NULL) <", i);
	j = printf("%X", NULL);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Zero in hex: %%X\", 0) <");
	i = ft_printf("Zero in hex: %X", 0);
	printf("> (return: %i)\n   printf(\"Zero in hex: %%X\", 0) <", i);
	j = printf("Zero in hex: %X", 0);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Maximum unsigned int in hex: %%X\", %%X) <", UINT_MAX);
	i = ft_printf("Maximum unsigned int in hex: %X", UINT_MAX);
	printf("> (return: %i)\n   printf(\"Maximum unsigned int in hex: %%X\", %%X) <", i);
	j = printf("Maximum unsigned int in hex: %X", UINT_MAX);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Small unsigned integer in hex: %%X\", 1) <");
	i = ft_printf("Small unsigned integer in hex: %X", 1);
	printf("> (return: %i)\n   printf(\"Small unsigned integer in hex: %%X\", 1) <", i);
	j = printf("Small unsigned integer in hex: %X", 1);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Multiple unsigned integers in hex: %%X %%X %%X\", 1, 2, 3) <");
	i = ft_printf("Multiple unsigned integers in hex: %X %X %X", 1, 2, 3);
	printf("> (return: %i)\n   printf(\"Multiple unsigned integers in hex: %%X %%X %%X\", 1, 2, 3) <", i);
	j = printf("Multiple unsigned integers in hex: %X %X %X", 1, 2, 3);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Mix with text: %%X is the answer\", 42) <");
	i = ft_printf("Mix with text: %X is the answer", 42);
	printf("> (return: %i)\n   printf(\"Mix with text: %%X is the answer\", 42) <", i);
	j = printf("Mix with text: %X is the answer", 42);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Hexadecimal of 255: %%X\", 255) <");
	i = ft_printf("Hexadecimal of 255: %X", 255);
	printf("> (return: %i)\n   printf(\"Hexadecimal of 255: %%X\", 255) <", i);
	j = printf("Hexadecimal of 255: %X", 255);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Hexadecimal of 4096: %%X\", 4096) <");
	i = ft_printf("Hexadecimal of 4096: %X", 4096);
	printf("> (return: %i)\n   printf(\"Hexadecimal of 4096: %%X\", 4096) <", i);
	j = printf("Hexadecimal of 4096: %X", 4096);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("===================== Mandatory conversion %%"
			" =====================\n");
	ft_printf("ft_printf(\"Printing a single percent: %%%%\") <");
	i = ft_printf("Printing a single percent: %%");
	printf("> (return: %i)\n   printf(\"Printing a single percent: %%%%\") <", i);
	j = printf("Printing a single percent: %%");
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Multiple percent signs: %%%%%%%%, %%%%%%%%, %%%%%%%%\") <");
	i = ft_printf("Multiple percent signs: %%%%, %%%%, %%%%");
	printf("> (return: %i)\n   printf(\"Multiple percent signs: %%%%%%%%, %%%%%%%%, %%%%%%%%\") <", i);
	j = printf("Multiple percent signs: %%%%, %%%%, %%%%");
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Percent with text: %%%% is the percent sign\") <");
	i = ft_printf("Percent with text: %% is the percent sign");
	printf("> (return: %i)\n   printf(\"Percent with text: %%%% is the percent sign\") <", i);
	j = printf("Percent with text: %% is the percent sign");
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Leading text %%%% and trailing text\") <");
	i = ft_printf("Leading text %% and trailing text");
	printf("> (return: %i)\n   printf(\"Leading text %%%% and trailing text\") <", i);
	j = printf("Leading text %% and trailing text");
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"%%%% at the start\") <");
	i = ft_printf("%% at the start");
	printf("> (return: %i)\n   printf(\"%%%% at the start\") <", i);
	j = printf("%% at the start");
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);

	ft_printf("===== Bonus precisionion '.', left alignment flag '-' and zero padding '0' =====\n");
	ft_printf("ft_printf(\"Precision for string: %%.5s\", \"42 Porto\") <");
	i = ft_printf("Precision for string: %.5s", "42 Porto");
	printf("> (return: %i)\n   printf(\"Precision for string: %%.5s\", \"42 Porto\") <", i);
	j = printf("Precision for string: %.5s", "42 Porto");
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Precision for integer: %%.3d\", 42) <");
	i = ft_printf("Precision for integer: %.3d", 42);
	printf("> (return: %i)\n   printf(\"Precision for integer: %%.3d\", 42) <", i);
	j = printf("Precision for integer: %.3d", 42);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Precision for zero: %%.3d\", 0) <");
	i = ft_printf("Precision for zero: %.3d", 0);
	printf("> (return: %i)\n   printf(\"Precision for zero: %%.3d\", 0) <", i);
	j = printf("Precision for zero: %.3d", 0);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Left aligned string: %%-10s\", \"Hi\") <");
	i = ft_printf("Left aligned string: %-10s", "Hi");
	printf("> (return: %i)\n   printf(\"Left aligned string: %%-10s\", \"Hi\") <", i);
	j = printf("Left aligned string: %-10s", "Hi");
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Left aligned integer: %%-5d\", 42) <");
	i = ft_printf("Left aligned integer: %-5d", 42);
	printf("> (return: %i)\n   printf(\"Left aligned integer: %%-5d\", 42) <", i);
	j = printf("Left aligned integer: %-5d", 42);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Left aligned zero: %%-5d\", 0) <");
	i = ft_printf("Left aligned zero: %-5d", 0);
	printf("> (return: %i)\n   printf(\"Left aligned zero: %%-5d\", 0) <", i);
	j = printf("Left aligned zero: %-5d", 0);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Zero padded integer: %%05d\", 42) <");
	i = ft_printf("Zero padded integer: %05d", 42);
	printf("> (return: %i)\n   printf(\"Zero padded integer: %%05d\", 42) <", i);
	j = printf("Zero padded integer: %05d", 42);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Zero padded zero: %%05d\", 0) <");
	i = ft_printf("Zero padded zero: %05d", 0);
	printf("> (return: %i)\n   printf(\"Zero padded zero: %%05d\", 0) <", i);
	j = printf("Zero padded zero: %05d", 0);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Zero padded string: %%05s\", \"Hi\") <");
	i = ft_printf("Zero padded string: %05s", "Hi");
	printf("> (return: %i)\n   printf(\"Zero padded string: %%05s\", \"Hi\") <", i);
	j = printf("Zero padded string: %05s", "Hi");
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);

	ft_printf("===================== Bonus %%-d with INT_MIN =====================\n");
	ft_printf("ft_printf(\"Left-justified INT_MIN: %%-d\", INT_MIN) <");
	i = ft_printf("Left-justified INT_MIN: %-d", INT_MIN);
	printf("> (return: %i)\n   printf(\"Left-justified INT_MIN: %%-d\", INT_MIN) <", i);
	j = printf("Left-justified INT_MIN: %-d", INT_MIN);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);

	ft_printf("===================== Bonus - flag for left alignment =====================\n");
	ft_printf("ft_printf(\"Left-aligned string: %%-10s\", \"Hello\") <");
	i = ft_printf("Left-aligned string: %-10s", "Hello");
	printf("> (return: %i)\n   printf(\"Left-aligned string: %%-10s\", \"Hello\") <", i);
	j = printf("Left-aligned string: %-10s", "Hello");
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Left-aligned char: %%-5c\", 'A') <");
	i = ft_printf("Left-aligned char: %-5c", 'A');
	printf("> (return: %i)\n   printf(\"Left-aligned char: %%-5c\", 'A') <", i);
	j = printf("Left-aligned char: %-5c", 'A');
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Left-aligned integer: %%-5d\", 42) <");
	i = ft_printf("Left-aligned integer: %-5d", 42);
	printf("> (return: %i)\n   printf(\"Left-aligned integer: %%-5d\", 42) <", i);
	j = printf("Left-aligned integer: %-5d", 42);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Left-aligned unsigned: %%-5u\", 42) <");
	i = ft_printf("Left-aligned unsigned: %-5u", 42);
	printf("> (return: %i)\n   printf(\"Left-aligned unsigned: %%-5u\", 42) <", i);
	j = printf("Left-aligned unsigned: %-5u", 42);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Left-aligned hex: %%-5x\", 255) <");
	i = ft_printf("Left-aligned hex: %-5x", 255);
	printf("> (return: %i)\n   printf(\"Left-aligned hex: %%-5x\", 255) <", i);
	j = printf("Left-aligned hex: %-5x", 255);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Left-aligned percent: %%-5%%\") <");
	i = ft_printf("Left-aligned percent: %-5%");
	printf("> (return: %i)\n   printf(\"Left-aligned percent: %%-5%%\") <", i);
	j = printf("Left-aligned percent: %-5%");
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Left-aligned string with width 20: %%-20s\", \"Hello\") <");
	i = ft_printf("Left-aligned string with width 20: %-20s", "Hello");
	printf("> (return: %i)\n   printf(\"Left-aligned string with width 20: %%-20s\", \"Hello\") <", i);
	j = printf("Left-aligned string with width 20: %-20s", "Hello");
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Left-aligned integer with width 10: %%-10d\", 123) <");
	i = ft_printf("Left-aligned integer with width 10: %-10d", 123);
	printf("> (return: %i)\n   printf(\"Left-aligned integer with width 10: %%-10d\", 123) <", i);
	j = printf("Left-aligned integer with width 10: %-10d", 123);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);

	ft_printf("===================== Bonus %%0nd flag =====================\n");
	ft_printf("ft_printf(\"Zero padded positive integer: %%04d\", 42) <");
	i = ft_printf("Zero padded positive integer: %04d", 42);
	printf("> (return: %i)\n   printf(\"Zero padded positive integer: %%04d\", 42) <", i);
	j = printf("Zero padded positive integer: %04d", 42);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Zero padded negative integer: %%04d\", -42) <");
	i = ft_printf("Zero padded negative integer: %04d", -42);
	printf("> (return: %i)\n   printf(\"Zero padded negative integer: %%04d\", -42) <", i);
	j = printf("Zero padded negative integer: %04d", -42);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Zero padded zero: %%04d\", 0) <");
	i = ft_printf("Zero padded zero: %04d", 0);
	printf("> (return: %i)\n   printf(\"Zero padded zero: %04d\", 0) <", i);
	j = printf("Zero padded zero: %04d", 0);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Zero padded maximum int: %%04d\", %%d) <", INT_MAX);
	i = ft_printf("Zero padded maximum int: %04d", INT_MAX);
	printf("> (return: %i)\n   printf(\"Zero padded maximum int: %%04d\", %%d) <", i);
	j = printf("Zero padded maximum int: %04d", INT_MAX);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Zero padded minimum int: %%04d\", %%d) <", INT_MIN);
	i = ft_printf("Zero padded minimum int: %04d", INT_MIN);
	printf("> (return: %i)\n   printf(\"Zero padded minimum int: %%04d\", %%d) <", i);
	j = printf("Zero padded minimum int: %04d", INT_MIN);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Zero padded multiple integers: %%04d %%04d %%04d\", 1, 23, 456) <");
	i = ft_printf("Zero padded multiple integers: %04d %04d %04d", 1, 23, 456);
	printf("> (return: %i)\n   printf(\"Zero padded multiple integers: %%04d %%04d %%04d\", 1, 23, 456) <", i);
	j = printf("Zero padded multiple integers: %04d %04d %04d", 1, 23, 456);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Zero padded with leading zeros: %%05d\", 7) <");
	i = ft_printf("Zero padded with leading zeros: %05d", 7);
	printf("> (return: %i)\n   printf(\"Zero padded with leading zeros: %%05d\", 7) <", i);
	j = printf("Zero padded with leading zeros: %05d", 7);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Zero padded with leading zeros: %%05d\", 12345) <");
	i = ft_printf("Zero padded with leading zeros: %05d", 12345);
	printf("> (return: %i)\n   printf(\"Zero padded with leading zeros: %%05d\", 12345) <", i);
	j = printf("Zero padded with leading zeros: %05d", 12345);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("===================== Bonus conversion %%i Integer with precision"
			" =====================\n");
	ft_printf("ft_printf(\"Integer with precision 2: %%.2i\", 42) <");
	i = ft_printf("Integer with precision 2: %.2i", 42);
	printf("> (return: %i)\n   printf(\"Integer with precision 2: %%.2i\", 42) <", i);
	j = printf("Integer with precision 2: %.2i", 42);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Integer with precision 4: %%.4i\", 42) <");
	i = ft_printf("Integer with precision 4: %.4i", 42);
	printf("> (return: %i)\n   printf(\"Integer with precision 4: %%.4i\", 42) <", i);
	j = printf("Integer with precision 4: %.4i", 42);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Integer with precision 0: %%.0i\", 42) <");
	i = ft_printf("Integer with precision 0: %.0i", 42);
	printf("> (return: %i)\n   printf(\"Integer with precision 0: %%.0i\", 42) <", i);
	j = printf("Integer with precision 0: %.0i", 42);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Negative Integer with precision 3: %%.3i\", -42) <");
	i = ft_printf("Negative Integer with precision 3: %.3i", -42);
	printf("> (return: %i)\n   printf(\"Negative Integer with precision 3: %%.3i\", -42) <", i);
	j = printf("Negative Integer with precision 3: %.3i", -42);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);

	ft_printf("===================== Bonus conversion %%s string with precision"
			" =====================\n");
	ft_printf("ft_printf(\"String with precision 5: %%.5s\", \"42 Porto\") <");
	i = ft_printf("String with precision 5: %.5s", "42 Porto");
	printf("> (return: %i)\n   printf(\"String with precision 5: %%.5s\", \"42 Porto\") <", i);
	j = printf("String with precision 5: %.5s", "42 Porto");
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"String with precision 3: %%.3s\", \"42 Porto\") <");
	i = ft_printf("String with precision 3: %.3s", "42 Porto");
	printf("> (return: %i)\n   printf(\"String with precision 3: %%.3s\", \"42 Porto\") <", i);
	j = printf("String with precision 3: %.3s", "42 Porto");
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"String with precision 0: %%.0s\", \"42 Porto\") <");
	i = ft_printf("String with precision 0: %.0s", "42 Porto");
	printf("> (return: %i)\n   printf(\"String with precision 0: %%.0s\", \"42 Porto\") <", i);
	j = printf("String with precision 0: %.0s", "42 Porto");
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Empty string with precision 5: %%.5s\", \"\") <");
	i = ft_printf("Empty string with precision 5: %.5s", "");
	printf("> (return: %i)\n   printf(\"Empty string with precision 5: %%.5s\", \"\") <", i);
	j = printf("Empty string with precision 5: %.5s", "");
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);

	ft_printf("===================== Flag '#' with %%x and %%X =====================\n");
	ft_printf("ft_printf(\"Hexadecimal with # flag: %%#x\", 42) <");
	i = ft_printf("Hexadecimal with # flag: %#x", 42);
	printf("> (return: %i)\n   printf(\"Hexadecimal with # flag: %%#x\", 42) <", i);
	j = printf("Hexadecimal with # flag: %#x", 42);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Hexadecimal with # flag: %%#X\", 42) <");
	i = ft_printf("Hexadecimal with # flag: %#X", 42);
	printf("> (return: %i)\n   printf(\"Hexadecimal with # flag: %%#X\", 42) <", i);
	j = printf("Hexadecimal with # flag: %#X", 42);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("===================== Flag '+' with %%d and %%i =====================\n");
	ft_printf("ft_printf(\"Positive integer with + flag: %%+d\", 42) <");
	i = ft_printf("Positive integer with + flag: %+d", 42);
	printf("> (return: %i)\n   printf(\"Positive integer with + flag: %%+d\", 42) <", i);
	j = printf("Positive integer with + flag: %+d", 42);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Negative integer with + flag: %%+d\", -42) <");
	i = ft_printf("Negative integer with + flag: %+d", -42);
	printf("> (return: %i)\n   printf(\"Negative integer with + flag: %%+d\", -42) <", i);
	j = printf("Negative integer with + flag: %+d", -42);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Positive integer with + flag: %%+i\", 42) <");
	i = ft_printf("Positive integer with + flag: %+i", 42);
	printf("> (return: %i)\n   printf(\"Positive integer with + flag: %%+i\", 42) <", i);
	j = printf("Positive integer with + flag: %+i", 42);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Negative integer with + flag: %%+i\", -42) <");
	i = ft_printf("Negative integer with + flag: %+i", -42);
	printf("> (return: %i)\n   printf(\"Negative integer with + flag: %%+i\", -42) <", i);
	j = printf("Negative integer with + flag: %+i", -42);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("===================== Flag ' ' with %%d and %%i =====================\n");
	ft_printf("ft_printf(\"Positive integer with space flag: %% d\", 42) <");
	i = ft_printf("Positive integer with space flag: % d", 42);
	printf("> (return: %i)\n   printf(\"Positive integer with space flag: %% d\", 42) <", i);
	j = printf("Positive integer with space flag: % d", 42);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Negative integer with space flag: %% d\", -42) <");
	i = ft_printf("Negative integer with space flag: % d", -42);
	printf("> (return: %i)\n   printf(\"Negative integer with space flag: %% d\", -42) <", i);
	j = printf("Negative integer with space flag: % d", -42);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Positive integer with space flag: %% i\", 42) <");
	i = ft_printf("Positive integer with space flag: % i", 42);
	printf("> (return: %i)\n   printf(\"Positive integer with space flag: %% i\", 42) <", i);
	j = printf("Positive integer with space flag: % i", 42);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Negative integer with space flag: %% i\", -42) <");
	i = ft_printf("Negative integer with space flag: % i", -42);
	printf("> (return: %i)\n   printf(\"Negative integer with space flag: %% i\", -42) <", i);
	j = printf("Negative integer with space flag: % i", -42);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("===================== Combinations of Flags =====================\n");
	ft_printf("ft_printf(\"Hexadecimal with # and + flag: %%#x\", 42) <");
	i = ft_printf("Hexadecimal with # and + flag: %#x", 42);
	printf("> (return: %i)\n   printf(\"Hexadecimal with # and + flag: %%#x\", 42) <", i);
	j = printf("Hexadecimal with # and + flag: %#x", 42);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Positive integer with + and space flag: %%+ d\", 42) <");
	i = ft_printf("Positive integer with + and space flag: %+ d", 42);
	printf("> (return: %i)\n   printf(\"Positive integer with + and space flag: %%+ d\", 42) <", i);
	j = printf("Positive integer with + and space flag: %+ d", 42);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Negative integer with + and space flag: %%+ d\", -42) <");
	i = ft_printf("Negative integer with + and space flag: %+ d", -42);
	printf("> (return: %i)\n   printf(\"Negative integer with + and space flag: %%+ d\", -42) <", i);
	j = printf("Negative integer with + and space flag: %+ d", -42);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"Hexadecimal with # and space flag: %%#x\", 0) <");
	i = ft_printf("Hexadecimal with # and space flag: %#x", 0);
	printf("> (return: %i)\n   printf(\"Hexadecimal with # and space flag: %%#x\", 0) <", i);
	j = printf("Hexadecimal with # and space flag: %#x", 0);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	
	ft_printf("\n\n===================== DEBUGGED"
			" =====================\n");

	ft_printf("ft_printf(\"%%-+3d\", -1) <");
	i = ft_printf("%-+3d", -1);
	printf("> (return: %i)\n   printf(\"%%-+3d\", -1) <", i);
	j = printf("%-+3d", -1);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"%% #-+03d\", -1) <");
	i = ft_printf("% #-+03d", -1);
	printf("> (return: %i)\n   printf(\"%% #-+03d\", -1) <", i);
	j = printf("% #-+03d", -1);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("======\n");

	ft_printf("ft_printf(\"%%-2d\", 11) <");
	i = ft_printf("%-2d", 11);
	printf("> (return: %i)\n   printf(\"%%-2d\", 11) <", i);
	j = printf("%-2d", 11);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"%%-3d\", 15) <");
	i = ft_printf("%-3d", 15);
	printf("> (return: %i)\n   printf(\"%%-3d\", 15) <", i);
	j = printf("%-3d", 15);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"%%-4d\", 16) <");
	i = ft_printf("%-4d", 16);
	printf("> (return: %i)\n   printf(\"%%-4d\", 16) <", i);
	j = printf("%-4d", 16);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"%% 5d\", 11) <");
	i = ft_printf("% 5d", 11);
	printf("> (return: %i)\n   printf(\"%% 5d\", 11) <", i);
	j = printf("% 5d", 11);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"%%+#024.d\", 2001100545) <");
	i = ft_printf("%+#024.d", 2001100545);
	printf("> (return: %i)\n   printf(\"%%+#024.d\", 2001100545) <", i);
	j = printf("%+#024.d", 2001100545);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"%%+081.d\", 260152959) <");
	i = ft_printf("%+081.d", 260152959);
	printf("> (return: %i)\n   printf(\"%%+081.d\", 260152959) <", i);
	j = printf("%+081.d", 260152959);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"%%+50d\", 1192707556) <");
	i = ft_printf("%+50d", 1192707556);
	printf("> (return: %i)\n   printf(\"%%+50d\", 1192707556) <", i);
	j = printf("%+50d", 1192707556);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"%% +#18.d\", 1747844822) <");
	i = ft_printf("% +#18.d", 1747844822);
	printf("> (return: %i)\n   printf(\"%% +#18.d\", 1747844822) <", i);
	j = printf("% +#18.d", 1747844822);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);

	ft_printf("ft_printf(\"%% .2d\", 225) <");
	i = ft_printf("% .2d", 225);
	printf("> (return: %i)\n   printf(\"%% .2d\", 225) <", i);
	j = printf("% .2d", 225);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);

	ft_printf("ft_printf(\"%% 03d\", 225) <");
	i = ft_printf("% 03d", 225);
	printf("> (return: %i)\n   printf(\"%% 03d\", 225) <", i);
	j = printf("% 03d", 225);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);

	ft_printf("ft_printf(\"%% d\", 0) <");
	i = ft_printf("% d", 0);
	printf("> (return: %i)\n   printf(\"%% d\", 0) <", i);
	j = printf("% d", 0);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);

	ft_printf("ft_printf(\"%% d\", LONG_MIN) <");
	i = ft_printf("% d", LONG_MIN);
	printf("> (return: %i)\n   printf(\"%% d\", LONG_MIN) <", i);
	j = printf("% d", LONG_MIN);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);

	ft_printf("\n\n===================== DEBUGGING"
			" =====================\n");

	ft_printf("ft_printf(\"%% #-+010d\", 225) <");
	i = ft_printf("% #-+010d", 225);
	printf("> (return: %i)\n   printf(\"%% #-+010d\", 225) <", i);
	j = printf("% #-+010d", 225);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);

	ft_printf("ft_printf(\"%%-+3d\", 10) <");
	i = ft_printf("%-+3d", 10);
	printf("> (return: %i)\n   printf(\"%%-+3d\", 10) <", i);
	j = printf("%-+3d", 10);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
	ft_printf("ft_printf(\"%% #-+03d\", 10) <");
	i = ft_printf("% #-+03d", 10);
	printf("> (return: %i)\n   printf(\"%% #-+03d\", 10) <", i);
	j = printf("% #-+03d", 10);
	printf("> ");
	if (j == i)
		printf("\033[32m(return: %i)\033[0m\n\n", j);
	else
		printf("\033[31m(return: %i)\033[0m\n\n", j);
}
