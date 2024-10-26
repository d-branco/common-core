/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:33:40 by abessa-m          #+#    #+#             */
/*   Updated: 2024/10/26 12:56:33 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <stddef.h>

static void		print_result(char *message);
static void		print_caution(char *message);
static void		print_warning(char *file_name, char *message);
static void		suspense(void);
static int		test_isalpha(void);
static int		test_isdigit(void);
static int		test_isalnum(void);
static int		test_isascii(void);
static int		test_isprint(void);
static int		test_tolower(void);
static int		test_toupper(void);
static int		test_strlen(void);
static int		test_memset(void);
static int		test_memcpy(void);
static int		test_strchr(void);

int	main(int argc, char **argv)
{
	int	i;
	int	aval;

	i = 1;
	aval = 0;
	while (i < argc)
	{
		if (!strcmp(argv[i], "ft_isalpha.c"))
			aval = test_isalpha();
		if (!strcmp(argv[i], "ft_isdigit.c"))
			aval = test_isdigit();
		if (!strcmp(argv[i], "ft_isalnum.c"))
			aval = test_isalnum();
		if (!strcmp(argv[i], "ft_isascii.c"))
			aval = test_isascii();
		if (!strcmp(argv[i], "ft_isprint.c"))
			aval = test_isprint();
		if (!strcmp(argv[i], "ft_tolower.c"))
			aval = test_tolower();
		if (!strcmp(argv[i], "ft_toupper.c"))
			aval = test_toupper();
		if (!strcmp(argv[i], "ft_strlen.c"))
			aval = test_strlen();
		if (!strcmp(argv[i], "ft_memset.c"))
			aval = test_memset();
		if (!strcmp(argv[i], "ft_memcpy.c"))
			aval = test_memcpy();
		if (!strcmp(argv[i], "ft_strchr.c"))
			aval = test_strchr();


		if (aval == 0)
			print_warning(argv[i], "has no test yet!");
		i++;
	}
}

static int	test_strchr(void)
{
	const char	*test_str = "Hello, World!";
	const char	*empty_str = "";
	char		str_with_nulls[] = "Hello\0Hidden\0Text";
	const char	*repeated_chars = "Hello, Hello!";
	const char	*special_chars = "Line1\nLine2\tTab\rReturn";
	char		c;
	int			i;

	if (ft_strchr(test_str, 'H') != strchr(test_str, 'H'))
	{
		print_caution("FAILED to find first character!");
		printf("(String: \"%s\", Char: 'H')", test_str);
		return (-1);
	}
	print_result("Finds first character correctly.");
	if (ft_strchr(test_str, 'W') != strchr(test_str, 'W'))
	{
		print_caution("FAILED to find middle character!");
		printf("(String: \"%s\", Char: 'W')", test_str);
		return (-1);
	}
	print_result("Finds middle character correctly.");
	if (ft_strchr(test_str, '!') != strchr(test_str, '!'))
	{
		print_caution("FAILED to find last character!");
		printf("(String: \"%s\", Char: '!')", test_str);
		return (-1);
	}
	print_result("Finds last character correctly.");
	if (ft_strchr(test_str, '\0') != strchr(test_str, '\0'))
	{
		print_caution("FAILED to find null terminator!");
		printf("(String: \"%s\", Char: '\\0')", test_str);
		return (-1);
	}
	print_result("Finds null terminator correctly.");
	if (ft_strchr(test_str, 'Z') != strchr(test_str, 'Z'))
	{
		print_caution("FAILED on character not in string!");
		printf("(String: \"%s\", Char: 'Z')", test_str);
		return (-1);
	}
	print_result("Handles character not in string correctly.");
	if (ft_strchr(empty_str, 'A') != strchr(empty_str, 'A'))
	{
		print_caution("FAILED on empty string!");
		printf("(String: \"\", Char: 'A')");
		return (-1);
	}
	print_result("Handles empty string correctly.");
	if (ft_strchr(str_with_nulls, 'H') != strchr(str_with_nulls, 'H'))
	{
		print_caution("FAILED with embedded null!");
		return (-1);
	}
	print_result("Handles string with embedded nulls correctly.");
	if (ft_strchr(repeated_chars, 'H') != strchr(repeated_chars, 'H'))
	{
		print_caution("FAILED with repeated characters!");
		printf("(String: \"%s\", Char: 'H')", repeated_chars);
		return (-1);
	}
	print_result("Handles repeated characters correctly.");
	for (c = '\0'; c < 127; c++)
	{
		if (ft_strchr(special_chars, c) != strchr(special_chars, c))
		{
			print_caution("FAILED with special character!");
			printf("(String: \"%s\", Char: '0x%x')", special_chars, c);
			return (-1);
		}
	}
	print_result("Handles special characters correctly.");
	for (i = -128; i <= 127; i++)
	{
		if (ft_strchr(test_str, i) != strchr(test_str, i))
		{
			print_caution("FAILED with ASCII value!");
			printf("(String: \"%s\", Value: %d)", test_str, i);
			return (-1);
		}
	}
	print_result("Handles all ASCII values correctly.");
	return (1);
}
static int test_memcpy(void)
{
	char			str1[100] = "Testing string";
	char			str2[100];
	int				numbers1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int				numbers2[10];
	unsigned char	bytes1[50];
	unsigned char	bytes2[50];
	void			*result;
	size_t			test_sizes[] = {0, 1, 4, 8, 16, 32};
	size_t			i;

	result = ft_memcpy(str2, str1, strlen(str1) + 1);
	if (result != str2 || strcmp(str1, str2) != 0)
	{
	    print_caution("FAILED: Basic string copy test!");
	    printf("   (Original: %s, Copy: %s)\n", str1, str2);
	    return (-1);
	}
	print_result("Passed basic string copy test.");
	result = ft_memcpy(numbers2, numbers1, sizeof(numbers1));
	if (result != numbers2 || memcmp(numbers1, numbers2, sizeof(numbers1)) != 0)
	{
	    print_caution("FAILED: Integer array copy test!");
	    return (-1);
	}
	print_result("Passed integer array copy test.");
	for (i = 0; i < sizeof(bytes1); i++)
	    bytes1[i] = (unsigned char)i;
	for (i = 0; i < sizeof(test_sizes)/sizeof(test_sizes[0]); i++)
	{
	    result = ft_memcpy(bytes2, bytes1, test_sizes[i]);
	    if (result != bytes2 || memcmp(bytes1, bytes2, test_sizes[i]) != 0)
	    {
	        print_caution("FAILED: Variable size test!");
	        printf("   (Size: %zu)\n", test_sizes[i]);
	        return (-1);
	    }
	}
	print_result("Passed variable size tests.");
	result = ft_memcpy(NULL, NULL, 0);
	if (result != NULL)
	{
	    print_caution("FAILED: NULL pointers with size 0 test!");
	    return (-1);
	}
	print_result("Passed NULL pointer with size 0 test.");
	for (i = 0; i < 8; i++)
	{
	    memset(bytes1, 0x55, sizeof(bytes1));
	    memset(bytes2, 0x55, sizeof(bytes2));
	    result = ft_memcpy(bytes2 + i, bytes1, 16);
	    if (result != (bytes2 + i) || memcmp(bytes2 + i, bytes1, 16) != 0)
	    {
	        print_caution("FAILED: Alignment test!");
	        printf("   (Offset: %zu)\n", i);
	        return (-1);
	    }
	}
	print_result("Passed alignment tests.");
	unsigned char edge_values[] = {0x00, 0xFF, 0xAA, 0x55};
	for (i = 0; i < sizeof(edge_values); i++)
	{
	    memset(bytes1, edge_values[i], 8);
	    result = ft_memcpy(bytes2, bytes1, 8);
	    if (result != bytes2 || memcmp(bytes1, bytes2, 8) != 0)
	    {
	        print_caution("FAILED: Edge values test!");
	        printf("   (Value: 0x%02x)\n", edge_values[i]);
	        return (-1);
	    }
	}
	print_result("Passed edge values test.");
	return (1);
}

static int	test_memset(void)
{
	unsigned char	buf1[100];
	unsigned char	buf2[100];
	int				int_buf1[10];
	int				int_buf2[10];
	void			*result1;
	size_t			test_sizes[] = {1, 2, 4, 8, 16, 32, 64};
	int				test_values[] = {0x00, 0xFF, 0xAA, 0x55, 'a', '0', '\n'};
	size_t			i;
	size_t			j;

	memset(buf1, 0x55, sizeof(buf1));
	memset(buf2, 0x55, sizeof(buf2));
	i = 0;
	while (i < sizeof(test_sizes) / sizeof(test_sizes[0]))
	{
		j = 0;
		while (j < sizeof(test_values) / sizeof(test_values[0]))
		{
			result1 = ft_memset(buf1, test_values[j], test_sizes[i]);
			memset(buf2, test_values[j], test_sizes[i]);
			if (result1 != buf1)
			{
				print_caution("FAILED: Return value is incorrect!");
				printf("(Size: %zu, Value: 0x%02x)\n",
					test_sizes[i], test_values[j]);
				return (-1);
			}
			if (memcmp(buf1, buf2, test_sizes[i]) != 0)
			{
				print_caution("FAILED: Memory content mismatch!");
				printf("(Size: %zu, Value: 0x%02x)\n",
					test_sizes[i], test_values[j]);
				return (-1);
			}
			if (buf1[test_sizes[i]] != 0x55)
			{
				print_caution("FAILED: Buffer overflow detected!");
				printf("(Size: %zu, Value: 0x%02x)\n",
					test_sizes[i], test_values[j]);
				return (-1);
			}
			j++;
		}
		i++;
	}
	print_result("Passed various sizes and values tests.");
	for (i = 0; i < 8; i++)
	{
		result1 = ft_memset(buf1 + i, 0x42, 32);
		memset(buf2 + i, 0x42, 32);

		if (memcmp(buf1 + i, buf2 + i, 32) != 0 || result1 != (buf1 + i))
		{
			print_caution("FAILED: Alignment test!");
			printf("(Offset: %zu)\n", i);
			return (-1);
		}
	}
	print_result("Passed alignment tests.");
	result1 = ft_memset(int_buf1, 0, sizeof(int_buf1));
	memset(int_buf2, 0, sizeof(int_buf2));
	if (memcmp(int_buf1, int_buf2, sizeof(int_buf1)) != 0 ||
		result1 != int_buf1)
	{
		print_caution("FAILED: Integer array test!");
		return (-1);
	}
	print_result("Passed integer array test.");
	for (i = 0; i < 10; i++)
	{
		result1 = ft_memset(buf1 + i, 'A' + i, 1);
		memset(buf2 + i, 'A' + i, 1);

		if (memcmp(buf1, buf2, i + 1) != 0 || result1 != (buf1 + i))
		{
			print_caution("FAILED: Sequential writes test!");
			printf("(Position: %zu)\n", i);
			return (-1);
		}
	}
	print_result("Passed sequential writes test.");
	unsigned char edge_values[] = {
		0x00, 0x01, 0x7F, 0x80, 0xFF, // Edge values
		'A', 'Z', 'a', 'z', '0', '9', // ASCII ranges
		'\t', '\n', '\r', ' ' // Special characters
	};
	for (i = 0; i < sizeof(edge_values); i++)
	{
		result1 = ft_memset(buf1, edge_values[i], 8);
		memset(buf2, edge_values[i], 8);

		if (memcmp(buf1, buf2, 8) != 0 || result1 != buf1)
		{
			print_caution("FAILED: Edge values test!");
			printf("(Value: 0x%02x)\n", edge_values[i]);
			return (-1);
		}
	}
	print_result("Passed edge values test.");
	return (1);
}

static int	test_strlen(void)
{
	char	*empty_str = "";
	char	*normal_str = "Quarenta e dois.";
	char	*long_str = "As armas e os baroes assinaldados, "
				"que da ocidental praia lusitana,"
				"por mares nunca dantes navegadosm, "
				"passaram ainda alem da Taprobana.";
	char	*special_chars = "Hello\n\t\r\v\f World!";
	char	*numbers = "-127 +0 42 225";
	char	str_with_null[20] = "Something\0hidden";

	if (ft_strlen(empty_str) != strlen(empty_str))
	{
		print_caution("FAILED on empty string!");
		printf("	(Expected: %lu, Got: %lu)\n",
			strlen(empty_str), ft_strlen(empty_str));
		return (-1);
	}
	print_result("Handles empty string correctly.");
	if (ft_strlen(normal_str) != strlen(normal_str))
	{
		print_caution("FAILED on normal string!");
		printf("	(Expected: %lu, Got: %lu)\n",
			strlen(normal_str), ft_strlen(normal_str));
		return (-1);
	}
	print_result("Handles normal string correctly.");
	if (ft_strlen(long_str) != strlen(long_str))
	{
		print_caution("FAILED on long string!");
		printf("	(Expected: %lu, Got: %lu)\n",
			strlen(long_str), ft_strlen(long_str));
		return (-1);
	}
	print_result("Handles long string correctly.");
	if (ft_strlen(special_chars) != strlen(special_chars))
	{
		print_caution("FAILED on string with special characters!");
		printf("	(Expected: %lu, Got: %lu)\n",
			strlen(special_chars), ft_strlen(special_chars));
		return (-1);
	}
	print_result("Handles special characters correctly.");
	if (ft_strlen(numbers) != strlen(numbers))
	{
		print_caution("FAILED on string with numbers!");
		printf("	(Expected: %lu, Got: %lu)\n",
			strlen(numbers), ft_strlen(numbers));
		return (-1);
	}
	print_result("Handles numeric characters correctly.");
	if (ft_strlen(str_with_null) != strlen(str_with_null))
	{
		print_caution("FAILED on string with NULL terminator in middle!");
		printf("	(Expected: %lu, Got: %lu)\n",
			strlen(str_with_null), ft_strlen(str_with_null));
		return (-1);
	}
	print_result("Handles embedded NULL terminator correctly.");
	return (1);
}

static int	test_toupper(void)
{
	int	i;

	i = 'a';
	while (i <= 'z')
	{
		if (ft_toupper(i) != (i - 32))
		{
			print_caution("FAILED to convert lowercase to uppercase!");
			printf("	(Character: %c, ASCII: %i)\n", i, i);
			return (-1);
		}
		i++;
	}
	print_result("Converts all lowercase letters to uppercase.");
	i = -1;
	while (i <= 127)
	{
		if (i < 'a' || i > 'z')
		{
			if (ft_toupper(i) != toupper(i))
			{
				print_caution("FAILED on non-lowercase character!");
				printf("	(ASCII: %i)\n", i);
				return (-1);
			}
		}
		i++;
	}
	print_result("Leaves non-lowercase characters unchanged.");
	i = 128;
	while (i <= 255)
	{
		if (ft_toupper(i) != toupper(i))
		{
			print_caution("FAILED on extended ASCII character!");
			printf("	(ASCII: %i)\n", i);
			return (-1);
		}
		i++;
	}
	print_result("Handles extended ASCII characters correctly.");
	return (1);
}

static int	test_tolower(void)
{
	int	i;

	i = 'A';
	while (i <= 'Z')
	{
		if (ft_tolower(i) != (i + 32))
		{
			print_caution("FAILED to convert uppercase to lowercase!");
			printf("	(Character: %c, ASCII: %i)\n", i, i);
			return (-1);
		}
		i++;
	}
	print_result("Converts all uppercase letters to lowercase.");
	i = -1;
	while (i <= 127)
	{
		if (i < 'A' || i > 'Z')
		{
			if (ft_tolower(i) != tolower(i))
			{
				print_caution("FAILED on non-uppercase character!");
				printf("	(ASCII: %i)\n", i);
				return (-1);
			}
		}
		i++;
	}
	print_result("Leaves non-uppercase characters unchanged.");
	i = 128;
	while (i <= 255)
	{
		if (ft_tolower(i) != tolower(i))
		{
			print_caution("FAILED on extended ASCII character!");
			printf("	(ASCII: %i)\n", i);
			return (-1);
		}
		i++;
	}
	print_result("Handles extended ASCII characters correctly.");
	return (1);
}

static int	test_isprint(void)
{
	int	i;

	i = 32;
	while (i <= 126)
	{
		if (!!ft_isprint(i) != !!isprint(i))
		{
			print_caution("FAILED on printable character!");
			printf("	(ASCII: %i)\n", i);
			return (-1);
		}
		i++;
	}
	print_result("Handles all printable characters (32-126).");
	i = -128;
	while (i < 32)
	{
		if (!!ft_isprint(i) != !!isprint(i))
		{
			print_caution("FAILED on non-printable character!");
			printf("	(ASCII: %i)\n", i);
			return (-1);
		}
		i++;
	}
	print_result("Handles control characters and negatives correctly.");
	i = 127;
	while (i <= 255)
	{
		if (!!ft_isprint(i) != !!isprint(i))
		{
			print_caution("FAILED on extended ASCII character!");
			printf("	(ASCII: %i)\n", i);
			return (-1);
		}
		i++;
	}
	print_result("Handles extended ASCII characters correctly.");
	return (1);
}

static int	test_isascii(void)
{
	int	i;

	i = 0;
	while (i <= 127)
	{
		if (ft_isascii(i) != 1)
		{
			print_caution("FAILED on valid ASCII character!");
			printf("	(ASCII: %i)\n", i);
			return (-1);
		}
		i++;
	}
	print_result("Identifies all valid ASCII values (0-127).");
	i = 128;
	while (i <= 255)
	{
		if (ft_isascii(i) != 0)
		{
			print_caution("FAILED on value above ASCII range!");
			printf("	(Value: %i)", i);
			return (-1);
		}
		i++;
	}
	print_result("Handles values above ASCII range (128-255).");
	i = -128;
	while (i < 0)
	{
		if (ft_isascii(i) != 0)
		{
			print_caution("FAILED on negative value!");
			printf("	(Value: %i)", i);
			return (-1);
		}
		i++;
	}
	print_result("Handles negative values.");
	return (1);
}

static int	test_isalnum(void)
{
	int	i;

	i = '0';
	while (i <= '9')
	{
		if (ft_isalnum(i) == i)
			i++;
		else
		{
			print_caution("FAILED to print a digit ascii character");
			return (-1);
		}
	}
	print_result("Prints all the digit ascii characters.");
	i = 'A';
	while (i <= 'z')
	{
		if (ft_isalnum(i) == i)
		{
			if (i == 'Z')
				i = 'a';
			else
				i++;
		}
		else
		{
			print_caution("FAILED to print an alphabetic ascii character");
			return (-1);
		}
	}
	print_result("Prints all the alphabetic ascii characters.");
	i = -10;
	while (i <= 127)
	{
		if (!((i >= '0' && i <= '9')
				|| (i >= 'A' && i <= 'Z')
				|| (i >= 'a' && i <= 'z')))
		{
			if (!!ft_isalnum(i) != !!isalnum(i))
			{
				print_caution("FAILED on non-alphanumeric character!");
				printf("	(ASCII: %i)\n", i);
				return (-1);
			}
		}
		i++;
	}
	print_result("Handles negatives, "
		"special characters and non-alphanumerics correctly.");
	return (1);
}

static int	test_isdigit(void)
{
	int	i;

	i = '0';
	while (i <= '9')
	{
		if (ft_isdigit(i) == i)
			i++;
		else
		{
			print_caution("FAILED to print a digit ascii character");
			return (-1);
		}
	}
	print_result("Prints all the digit ascii characters.");
	i = -10;
	while (i <= 127)
	{
		if (i < '0' || i > '9')
		{
			if (!!ft_isdigit(i) != !!isdigit(i))
			{
				print_caution("FAILED on non-digit character!");
				printf("	(ASCII: %i)\n", i);
				return (-1);
			}
		}
		i++;
	}
	print_result("Handles negatives,"
		" special characters and non-digits correctly.");
	return (1);
}

static int	test_isalpha(void)
{
	int	i;

	i = 'A';
	while (i <= 'z')
	{
		if (ft_isalpha(i) == i)
		{
			if (i == 'Z')
				i = 'a';
			else
				i++;
		}
		else
		{
			print_caution("FAILED to print an alphabetic ascii character");
			return (-1);
		}
	}
	print_result("Prints all the alphabetic ascii characters.");
	i = -10;
	while (i <= 32)
	{
		if (!!ft_isalpha(i) != !!isalpha(i))
		{
			print_caution("FAILED on non-alphabetic character!");
			printf("	(ASCII: %i)\n", i);
			return (-1);
		}
		i++;
	}
	print_result("Handles negatives, NULL and space characters.");
	return (1);
}

static void	print_result(char *message)
{
	printf("	\033[0;32m%s\033[0m\n", message);
	suspense();
}

static void	print_caution(char *message)
{
	printf("	\033[41m%s\033[0m\n", message);
}

static void	print_warning(char *file_name, char *message)
{
	printf("	\033[0;93m%s: %s\033[0m\n", file_name, message);
	suspense();
}

static void	suspense(void)
{
	usleep(200000);
}
