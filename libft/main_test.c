/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:33:40 by abessa-m          #+#    #+#             */
/*   Updated: 2024/10/28 10:43:35 by abessa-m         ###   ########.fr       */
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
static int		test_bzero(void);
static int		test_memcmp(void);
static int		test_memmove(void);
static int		test_memchr(void);

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
		if (!strcmp(argv[i], "ft_bzero.c"))
			aval = test_bzero();
		if (!strcmp(argv[i], "ft_memcmp.c"))
			aval = test_memcmp();
		if (!strcmp(argv[i], "ft_memmove.c"))
			aval = test_memmove();
		if (!strcmp(argv[i], "ft_memchr.c"))
			aval = test_memchr();




		if (aval == 0)
			print_warning(argv[i], "has no test yet!");
		i++;
	}
}

static int	test_memchr(void)
{
	char			str[] = "Hello, World!";
	int				numbers[] = {1, 2, 3, 4, 5};
	unsigned char	bytes[] = {0x00, 0xFF, 0xAA, 0x55};
	int				result = 1;

	// Test basic functionality
	if (ft_memchr(str, 'W', strlen(str)) != memchr(str, 'W', strlen(str)))
	{
		print_caution("FAILED: Basic character search test!");
		printf("\t(String: \"%s\", Char: 'W')\n", str);
		result = -1;
	}
	else
		print_result("Passed basic character search test.");

	// Test search for character not in string
	if (ft_memchr(str, 'Z', strlen(str)) != memchr(str, 'Z', strlen(str)))
	{
		print_caution("FAILED: Search for non-existent character!");
		printf("\t(String: \"%s\", Char: 'Z')\n", str);
		result = -2;
	}
	else
		print_result("Passed search for non-existent character.");

	// Test search in integer array
	if (ft_memchr(numbers, 3, sizeof(numbers)) != memchr(numbers, 3, sizeof(numbers)))
	{
		print_caution("FAILED: Integer array search test!");
		result = -3;
	}
	else
		print_result("Passed integer array search test.");

	// Test search for null terminator
	if (ft_memchr(str, '\0', strlen(str) + 1) != memchr(str, '\0', strlen(str) + 1))
	{
		print_caution("FAILED: Null terminator search test!");
		result = -4;
	}
	else
		print_result("Passed null terminator search test.");

	// Test search in byte array
	if (ft_memchr(bytes, 0xAA, sizeof(bytes)) != memchr(bytes, 0xAA, sizeof(bytes)))
	{
		print_caution("FAILED: Byte array search test!");
		result = -5;
	}
	else
		print_result("Passed byte array search test.");

	// Test with size 0
	if (ft_memchr(str, 'H', 0) != memchr(str, 'H', 0))
	{
		print_caution("FAILED: Zero size test!");
		result = -6;
	}
	else
		print_result("Passed zero size test.");

	// Test with NULL pointer and size 0
	if (ft_memchr(NULL, 'A', 0) != memchr(NULL, 'A', 0))
	{
		print_caution("FAILED: NULL pointer with zero size test!");
		result = -7;
	}
	else
		print_result("Passed NULL pointer with zero size test.");

	return result;
}

static int	test_memmove(void)
{
	char	src1[] = "Hello, World!";
	char	src2[] = "Hello, World!";
	char	dest1[50] = {0};
	char	dest2[50] = {0};
	size_t	size;
	int		result = 1;
	char	overlap_src1[] = "1234567890";
	char	overlap_src2[] = "1234567890";
	int		numbers1[] = {1, 2, 3, 4, 5};
	int		numbers2[] = {1, 2, 3, 4, 5};
	void	*ret;

	size = strlen(src1) + 1;
	ret = ft_memmove(dest1, src1, size);
	memmove(dest2, src2, size);
	if (ret != dest1)
	{
		print_caution("FAILED: Basic memmove return value test!");
		result = -1;
	}
	else if (memcmp(dest1, dest2, size) != 0)
	{
		print_caution("FAILED: Basic memmove test!");
		printf("	(Source: \"%s\", Expected: \"%s\", Got: \"%s\")\n", src1, dest2, dest1);
		result = -1;
	}
	else
		print_result("Passed basic memmove test.");
	ft_memmove(overlap_src1 + 2, overlap_src1, 8);
	memmove(overlap_src2 + 2, overlap_src2, 8);
	if (memcmp(overlap_src1, overlap_src2, 10) != 0)
	{
		print_caution("FAILED: Overlapping regions test (forward)!");
		printf("	(Expected: \"%s\", Got: \"%s\")\n", overlap_src2, overlap_src1);
		result = -2;
	}
	else
		print_result("Passed overlapping regions test (forward).");
	strcpy(overlap_src1, "1234567890");
	strcpy(overlap_src2, "1234567890");
	ft_memmove(overlap_src1, overlap_src1 + 2, 8);
	memmove(overlap_src2, overlap_src2 + 2, 8);
	if (memcmp(overlap_src1, overlap_src2, 10) != 0)
	{
		print_caution("FAILED: Overlapping regions test (backward)!");
		printf("	(Expected: \"%s\", Got: \"%s\")\n", overlap_src2, overlap_src1);
		result = -3;
	}
	else
		print_result("Passed overlapping regions test (backward).");
	ft_memmove(numbers1 + 1, numbers1, 3 * sizeof(int));
	memmove(numbers2 + 1, numbers2, 3 * sizeof(int));
	if (memcmp(numbers1, numbers2, 5 * sizeof(int)) != 0)
	{
		print_caution("FAILED: Integer array test!");
		printf("	(Expected: %d %d %d %d %d, Got: %d %d %d %d %d)\n",
			numbers2[0], numbers2[1], numbers2[2], numbers2[3], numbers2[4],
			numbers1[0], numbers1[1], numbers1[2], numbers1[3], numbers1[4]);
		result = -4;
	}
	else
		print_result("Passed integer array test.");
	if (ft_memmove(NULL, NULL, 0) != NULL)
	{
		print_caution("FAILED: NULL pointers with size 0 test!");
		result = -5;
	}
	else
		print_result("Passed NULL pointer with size 0 test.");
	if (ft_memmove(dest1, src1, 0) != dest1)
	{
		print_caution("FAILED: Zero-size with non-NULL pointers test!");
		result = -6;
	}
	else
		print_result("Passed zero-size with non-NULL pointers test.");

	return (result);
}

static int	test_memcmp(void)
{
	char			str1[] = "Hello, World!";
	char			str2[] = "Hello, world!";
	char			identical1[] = "Test String";
	char			identical2[] = "Test String";
	unsigned char	bytes1[50];
	unsigned char	bytes2[50];
	char			empty1[] = "";
	char			empty2[] = "";
	char			nulls1[] = "Test\0Test";
	char			nulls2[] = "Test\0test";
	size_t			test_sizes[] = {0, 1, 4, 8, 16};
	size_t			i;
	int				result = 1;
	
	if (ft_memcmp(str1, str2, strlen(str1)) != memcmp(str1, str2, strlen(str1)))
	{
		print_caution("FAILED: Basic string comparison test!");
		printf("	(String1: \"%s\", String2: \"%s\")\n", str1, str2);
		result = -1;
	}
	else
		print_result("Passed basic string comparison test.");
	if (ft_memcmp(identical1, identical2, strlen(identical1)) != 
		memcmp(identical1, identical2, strlen(identical1)))
	{
		print_caution("FAILED: Identical strings test!");
		result = -2;
	}
	else
		print_result("Passed identical strings test.");
	if (ft_memcmp(empty1, empty2, 0) != memcmp(empty1, empty2, 0))
	{
		print_caution("FAILED: Empty strings test!");
		result = -3;
	}
	else
		print_result("Passed empty strings test.");
	if (ft_memcmp(nulls1, nulls2, sizeof(nulls1)) != 
		memcmp(nulls1, nulls2, sizeof(nulls1)))
	{
		print_caution("FAILED: Strings with embedded nulls test!");
		result = -4;
	}
	else
		print_result("Passed strings with embedded nulls test.");
	i = 0;
	while (i < sizeof(bytes1))
	{
		bytes1[i] = (unsigned char)i;
		bytes2[i] = (unsigned char)i;
		i++;
	}
	i = 0;
	while (i < sizeof(test_sizes)/sizeof(test_sizes[0]))
	{
		if (ft_memcmp(bytes1, bytes2, test_sizes[i])
			!=  
			memcmp(bytes1, bytes2, test_sizes[i]))
		{
			print_caution("FAILED: Variable size test with identical data!");
			printf("	(Size: %zu)\n", test_sizes[i]);
			result = -5;
		}
		bytes2[test_sizes[i] / 2] = (unsigned char)(bytes2[test_sizes[i] / 2] + 1);
		if (ft_memcmp(bytes1, bytes2, test_sizes[i])
			!=  
			memcmp(bytes1, bytes2, test_sizes[i]))
		{
			print_caution("FAILED: Variable size test with different data!");
			printf("	(Size: %zu)\n", test_sizes[i]);
			result = -6;
		}
		bytes2[test_sizes[i] / 2] = (unsigned char)(bytes2[test_sizes[i] / 2] - 1);
		i++;
	}
	if (result == 1)
		print_result("Passed variable size tests.");
	unsigned char edge_values[] = {0x00, 0x01, 0x7F, 0x80, 0xFF};
	i = 0;
	while (i < sizeof(edge_values))
	{
		bytes1[0] = edge_values[i];
		bytes2[0] = edge_values[i];
		if (ft_memcmp(bytes1, bytes2, 1) != memcmp(bytes1, bytes2, 1))
		{
			print_caution("FAILED: Edge values test!");
			printf("	(Value: 0x%02x)\n", edge_values[i]);
			if (result == 1) result = -7;
		}
		bytes2[0] = edge_values[(i + 1) % sizeof(edge_values)];
		if (ft_memcmp(bytes1, bytes2, 1) != memcmp(bytes1, bytes2, 1))
		{
			print_caution("FAILED: Edge values comparison test!");
			printf("	(Value1: 0x%02x, Value2: 0x%02x)\n", 
					edge_values[i], bytes2[0]);
			result = -8;
		}
		i++;
	}
	if ((result != 7) || (result != 8))
		print_result("Passed edge values test.");
	i = 0;
	while (i < 8)
	{
		if (ft_memcmp(bytes1 + i, bytes2 + i, 16) != 
			memcmp(bytes1 + i, bytes2 + i, 16))
		{
			print_caution("FAILED: Alignment test!");
			printf("	(Offset: %zu)\n", i);
			if (result == 1) result = -9;
		}
		i++;
	}
	if (result == 1)
		print_result("Passed alignment tests.");
	return result;
}

static int	test_bzero(void)
{
	unsigned char	buf1[100];
	unsigned char	buf2[100];
	int				int_buf1[10];
	int				int_buf2[10];
	size_t			test_sizes[] = {0, 1, 2, 4, 8, 16, 32, 64};
	size_t			i;
	int				result = 1;
	
	i = 0;
	while (i < sizeof(test_sizes) / sizeof(test_sizes[0]))
	{
		memset(buf1, 0x55, sizeof(buf1));
		memset(buf2, 0x55, sizeof(buf2));
		ft_bzero(buf1, test_sizes[i]);
		bzero(buf2, test_sizes[i]);
		if (memcmp(buf1, buf2, sizeof(buf1)) != 0)
		{
			print_caution("FAILED: Basic zero-fill test!");
			printf("	(Size: %zu)\n", test_sizes[i]);
			result = -1;
		}
		if (test_sizes[i] < sizeof(buf1) && buf1[test_sizes[i]] != 0x55)
		{
			print_caution("FAILED: Buffer overflow detected!");
			printf("	(Size: %zu)\n", test_sizes[i]);
			result = -2;
		}
		i++;
	}
	if (result == 1)
		print_result("Passed various sizes test.");
	i = 0;
	while (i < 8)
	{
		memset(buf1, 0x55, sizeof(buf1));
		memset(buf2, 0x55, sizeof(buf2));

		ft_bzero(buf1 + i, 32);
		bzero(buf2 + i, 32);

		if (memcmp(buf1, buf2, sizeof(buf1)) != 0)
		{
			print_caution("FAILED: Alignment test!");
			printf("	(Offset: %zu)\n", i);
			result = -3;
		}
		i++;
	}
	if (result > -3)
		print_result("Passed alignment tests.");
	memset(int_buf1, 0x55, sizeof(int_buf1));
	memset(int_buf2, 0x55, sizeof(int_buf2));
	ft_bzero(int_buf1, sizeof(int_buf1));
	bzero(int_buf2, sizeof(int_buf2));
	if (memcmp(int_buf1, int_buf2, sizeof(int_buf1)) != 0)
	{
		print_caution("FAILED: Integer array test!");
		result = -4;
	}
	if (result > -4)
		print_result("Passed integer array test.");
	memset(buf1, 0x55, sizeof(buf1));
	memset(buf2, 0x55, sizeof(buf2));
	i = 0;
	while (i < 10)
	{
		ft_bzero(buf1 + i, 1);
		bzero(buf2 + i, 1);

		if (memcmp(buf1, buf2, sizeof(buf1)) != 0)
		{
			print_caution("FAILED: Sequential writes test!");
			printf("	(Position: %zu)\n", i);
			result = -5;
		}
		i++;
	}
	if (result > -5)
		print_result("Passed sequential writes test.");
	memset(buf1, 0x55, sizeof(buf1));
	memset(buf2, 0x55, sizeof(buf2));
	ft_bzero(buf1, 0);
	bzero(buf2, (0));
	if (memcmp(buf1, buf2, sizeof(buf1)) != 0)
	{
		print_caution("FAILED: Zero size test!");
		result = -6;
	}
	if (result > -6)
		print_result("Passed zero size test.");
	return (result);
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
	int			result = 1;

	if (ft_strchr(test_str, 'H') != strchr(test_str, 'H'))
	{
		print_caution("FAILED to find first character!");
		printf("(String: \"%s\", Char: 'H')\n", test_str);
		result = -1;
	}
	else
		print_result("Finds first character correctly.");
	if (ft_strchr(test_str, 'W') != strchr(test_str, 'W'))
	{
		print_caution("FAILED to find middle character!");
		printf("(String: \"%s\", Char: 'W')\n", test_str);
		result = -2;
	}
	else
		print_result("Finds middle character correctly.");
	if (ft_strchr(test_str, '!') != strchr(test_str, '!'))
	{
		print_caution("FAILED to find last character!");
		printf("(String: \"%s\", Char: '!')\n", test_str);
		result = -3;
	}
	else
		print_result("Finds last character correctly.");
	if (ft_strchr(test_str, '\0') != strchr(test_str, '\0'))
	{
		print_caution("FAILED to find null terminator!");
		printf("(String: \"%s\", Char: '\\0')\n", test_str);
		result = -4;
	}
	else
		print_result("Finds null terminator correctly.");
	if (ft_strchr(test_str, 'Z') != strchr(test_str, 'Z'))
	{
		print_caution("FAILED on character not in string!");
		printf("(String: \"%s\", Char: 'Z')\n", test_str);
		result = -5;
	}
	else
		print_result("Handles character not in string correctly.");
	if (ft_strchr(empty_str, 'A') != strchr(empty_str, 'A'))
	{
		print_caution("FAILED on empty string!");
		printf("(String: \"\", Char: 'A')\n");
		result = -6;
	}
	else
		print_result("Handles empty string correctly.");
	if (ft_strchr(str_with_nulls, 'H') != strchr(str_with_nulls, 'H'))
	{
		print_caution("FAILED with embedded null!");
		result = -7;
	}
	else
		print_result("Handles string with embedded nulls correctly.");
	if (ft_strchr(repeated_chars, 'H') != strchr(repeated_chars, 'H'))
	{
		print_caution("FAILED with repeated characters!");
		printf("(String: \"%s\", Char: 'H')\n", repeated_chars);
		result = -8;
	}
	else
		print_result("Handles repeated characters correctly.");
	c = '\0';
	while (c < 127)
	{
		if (ft_strchr(special_chars, c) != strchr(special_chars, c))
		{
			print_caution("FAILED with special character!");
			printf("(String: \"%s\", Char: '0x%x')\n", special_chars, c);
			result = -9;
		}
		c++;
	}
	if (result != -9)
		print_result("Handles special characters correctly.");

	i = -128;
	while (i <= 127)
	{
		if (ft_strchr(test_str, i) != strchr(test_str, i))
		{
			print_caution("FAILED with ASCII value!");
			printf("(String: \"%s\", Value: %d)\n", test_str, i);
			result = -10;
		}
		i++;
	}
	if (result != -10)
		print_result("Handles all ASCII values correctly.");
	return (result);
}

static int	test_memcpy(void)
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
	int				error_code = 1;

	result = ft_memcpy(str2, str1, strlen(str1) + 1);
	if (result != str2 || strcmp(str1, str2) != 0)
	{
		print_caution("FAILED: Basic string copy test!");
		printf("	(Original: %s, Copy: %s)\n", str1, str2);
		error_code = -1;
	}
	else
		print_result("Passed basic string copy test.");
	result = ft_memcpy(numbers2, numbers1, sizeof(numbers1));
	if (result != numbers2 || memcmp(numbers1, numbers2, sizeof(numbers1)) != 0)
	{
		print_caution("FAILED: Integer array copy test!");
		error_code = -2;
	}
	else
		print_result("Passed integer array copy test.");
	i = 0;
	while (i < sizeof(bytes1))
	{
		bytes1[i] = (unsigned char)i;
		i++;
	}
	i = 0;
	while (i < sizeof(test_sizes)/sizeof(test_sizes[0]))
	{
		result = ft_memcpy(bytes2, bytes1, test_sizes[i]);
		if (result != bytes2 || memcmp(bytes1, bytes2, test_sizes[i]) != 0)
		{
			print_caution("FAILED: Variable size test!");
			printf("	(Size: %zu)\n", test_sizes[i]);
			error_code = -3;
			break;
		}
		i++;
	}
	if (error_code == 1)
		print_result("Passed variable size tests.");
	result = ft_memcpy(NULL, NULL, 0);
	if (result != NULL)
	{
		print_caution("FAILED: NULL pointers with size 0 test!");
		error_code = -4;
	}
	else
		print_result("Passed NULL pointer with size 0 test.");
	i = 0;
	while (i < 8)
	{
		memset(bytes1, 0x55, sizeof(bytes1));
		memset(bytes2, 0x55, sizeof(bytes2));
		result = ft_memcpy(bytes2 + i, bytes1, 16);
		if (result != (bytes2 + i) || memcmp(bytes2 + i, bytes1, 16) != 0)
		{
			print_caution("FAILED: Alignment test!");
			printf("	(Offset: %zu)\n", i);
			error_code = -5;
			break;
		}
		i++;
	}
	if (error_code == 1)
		print_result("Passed alignment tests.");
	unsigned char edge_values[] = {0x00, 0xFF, 0xAA, 0x55};
	i = 0;
	while (i < sizeof(edge_values))
	{
		memset(bytes1, edge_values[i], 8);
		result = ft_memcpy(bytes2, bytes1, 8);
		if (result != bytes2 || memcmp(bytes1, bytes2, 8) != 0)
		{
			print_caution("FAILED: Edge values test!");
			printf("	(Value: 0x%02x)\n", edge_values[i]);
			error_code = -6;
			break;
		}
		i++;
	}
	if (error_code == 1)
		print_result("Passed edge values test.");

	return (error_code);
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
	int				result = 1;

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
				if (result == 1) result = -1;
			}
			if (memcmp(buf1, buf2, test_sizes[i]) != 0)
			{
				print_caution("FAILED: Memory content mismatch!");
				printf("(Size: %zu, Value: 0x%02x)\n",
					test_sizes[i], test_values[j]);
				if (result == 1) result = -2;
			}
			if (buf1[test_sizes[i]] != 0x55)
			{
				print_caution("FAILED: Buffer overflow detected!");
				printf("(Size: %zu, Value: 0x%02x)\n",
					test_sizes[i], test_values[j]);
				if (result == 1) result = -3;
			}
			j++;
		}
		i++;
	}
	if (result == 1)
		print_result("Passed various sizes and values tests.");
	i = 0;
	while (i < 8)
	{
		result1 = ft_memset(buf1 + i, 0x42, 32);
		memset(buf2 + i, 0x42, 32);

		if (memcmp(buf1 + i, buf2 + i, 32) != 0 || result1 != (buf1 + i))
		{
			print_caution("FAILED: Alignment test!");
			printf("(Offset: %zu)\n", i);
			result = -4;
		}
		i++;
	}
	if (result != 4)
		print_result("Passed alignment tests.");
	result1 = ft_memset(int_buf1, 0, sizeof(int_buf1));
	memset(int_buf2, 0, sizeof(int_buf2));
	if (memcmp(int_buf1, int_buf2, sizeof(int_buf1)) != 0 ||
		result1 != int_buf1)
	{
		print_caution("FAILED: Integer array test!");
		result = -5;
	}
	if (result != 5)
		print_result("Passed integer array test.");
	i = 0;
	while (i < 10)
	{
		result1 = ft_memset(buf1 + i, 'A' + i, 1);
		memset(buf2 + i, 'A' + i, 1);

		if (memcmp(buf1, buf2, i + 1) != 0 || result1 != (buf1 + i))
		{
			print_caution("FAILED: Sequential writes test!");
			printf("(Position: %zu)\n", i);
			result = -6;
		}
		i++;
	}
	if (result != 6)
		print_result("Passed sequential writes test.");
	unsigned char edge_values[] = {
		0x00, 0x01, 0x7F, 0x80, 0xFF, // Edge values
		'A', 'Z', 'a', 'z', '0', '9', // ASCII ranges
		'\t', '\n', '\r', ' ' // Special characters
	};
	i = 0;
	while (i < sizeof(edge_values))
	{
		result1 = ft_memset(buf1, edge_values[i], 8);
		memset(buf2, edge_values[i], 8);
		if (memcmp(buf1, buf2, 8) != 0 || result1 != buf1)
		{
			print_caution("FAILED: Edge values test!");
			printf("(Value: 0x%02x)\n", edge_values[i]);
			result = -7;
		}
		i++;
	}
	if (result != 7)
		print_result("Passed edge values test.");
	return (result);
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
	int	result;

	result = 1;
	if (ft_strlen(empty_str) != strlen(empty_str))
	{
		print_caution("FAILED on empty string!");
		printf("	(Expected: %lu, Got: %lu)\n",
			strlen(empty_str), ft_strlen(empty_str));
		result = -1;
	}
	if (result != -1)
		print_result("Handles empty string correctly.");
	if (ft_strlen(normal_str) != strlen(normal_str))
	{
		print_caution("FAILED on normal string!");
		printf("	(Expected: %lu, Got: %lu)\n",
			strlen(normal_str), ft_strlen(normal_str));
		result = -2;
	}
	if (result != -2)
		print_result("Handles normal string correctly.");
	if (ft_strlen(long_str) != strlen(long_str))
	{
		print_caution("FAILED on long string!");
		printf("	(Expected: %lu, Got: %lu)\n",
			strlen(long_str), ft_strlen(long_str));
		result = -3;
	}
	if (result != -3)
		print_result("Handles long string correctly.");
	if (ft_strlen(special_chars) != strlen(special_chars))
	{
		print_caution("FAILED on string with special characters!");
		printf("	(Expected: %lu, Got: %lu)\n",
			strlen(special_chars), ft_strlen(special_chars));
		result = -4;
	}
	if (result != -4)
		print_result("Handles special characters correctly.");
	if (ft_strlen(numbers) != strlen(numbers))
	{
		print_caution("FAILED on string with numbers!");
		printf("	(Expected: %lu, Got: %lu)\n",
			strlen(numbers), ft_strlen(numbers));
		result = -5;
	}
	if (result != -5)
		print_result("Handles numeric characters correctly.");
	if (ft_strlen(str_with_null) != strlen(str_with_null))
	{
		print_caution("FAILED on string with NULL terminator in middle!");
		printf("	(Expected: %lu, Got: %lu)\n",
			strlen(str_with_null), ft_strlen(str_with_null));
		result = -6;
	}
	if (result != -6)
		print_result("Handles embedded NULL terminator correctly.");
	return (result);
}

static int	test_toupper(void)
{
	int	i;
	int	result;

	result = 1;
	i = 'a';
	while (i <= 'z')
	{
		if (ft_toupper(i) != (i - 32))
		{
			print_caution("FAILED to convert lowercase to uppercase!");
			printf("	(Character: %c, ASCII: %i)\n", i, i);
			result = -1;
		}
		i++;
	}
	if (result != -1)
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
				result = -2;
			}
		}
		i++;
	}
	if (result != -2)
		print_result("Leaves non-lowercase characters unchanged.");
	i = 128;
	while (i <= 255)
	{
		if (ft_toupper(i) != toupper(i))
		{
			print_caution("FAILED on extended ASCII character!");
			printf("	(ASCII: %i)\n", i);
			result = -3;
		}
		i++;
	}
	if (result != -3)
		print_result("Handles extended ASCII characters correctly.");
	return (result);
}

static int	test_tolower(void)
{
	int	i;
	int	result;

	result = 1;
	i = 'A';
	while (i <= 'Z')
	{
		if (ft_tolower(i) != (i + 32))
		{
			print_caution("FAILED to convert uppercase to lowercase!");
			printf("	(Character: %c, ASCII: %i)\n", i, i);
			result = -1;
		}
		i++;
	}
	if (result != -1)
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
				result = -2;
			}
		}
		i++;
	}
	if (result != -2)
		print_result("Leaves non-uppercase characters unchanged.");
	i = 128;
	while (i <= 255)
	{
		if (ft_tolower(i) != tolower(i))
		{
			print_caution("FAILED on extended ASCII character!");
			printf("	(ASCII: %i)\n", i);
			result = -3;
		}
		i++;
	}
	if (result != -3)
		print_result("Handles extended ASCII characters correctly.");
	return (result);
}

static int	test_isprint(void)
{
	int	i;
	int	result;

	result = 1;
	i = 32;
	while (i <= 126)
	{
		if (!!ft_isprint(i) != !!isprint(i))
		{
			print_caution("FAILED on printable character!");
			printf("	(ASCII: %i)\n", i);
			result = -1;
		}
		i++;
	}
	if (result != -1)
		print_result("Handles all printable characters (32-126).");
	i = -128;
	while (i < 32)
	{
		if (!!ft_isprint(i) != !!isprint(i))
		{
			print_caution("FAILED on non-printable character!");
			printf("	(ASCII: %i)\n", i);
			result = -2;
		}
		i++;
	}
	if (result != -2)
		print_result("Handles control characters and negatives correctly.");
	i = 127;
	while (i <= 255)
	{
		if (!!ft_isprint(i) != !!isprint(i))
		{
			print_caution("FAILED on extended ASCII character!");
			printf("	(ASCII: %i)\n", i);
			result = -3;
		}
		i++;
	}
	if (result != -3)
		print_result("Handles extended ASCII characters correctly.");
	return (result);
}

static int	test_isascii(void)
{
	int	i;
	int	result;

	result = 1;
	i = 0;
	while (i <= 127)
	{
		if (ft_isascii(i) != 1)
		{
			print_caution("FAILED on valid ASCII character!");
			printf("	(ASCII: %i)\n", i);
			result = -1;
		}
		i++;
	}
	if (result != -1)
		print_result("Identifies all valid ASCII values (0-127).");
	i = 128;
	while (i <= 255)
	{
		if (ft_isascii(i) != 0)
		{
			print_caution("FAILED on value above ASCII range!");
			printf("	(Value: %i)\n", i);
			result = -2;
		}
		i++;
	}
	if (result != -2)
		print_result("Handles values above ASCII range (128-255).");
	i = -128;
	while (i < 0)
	{
		if (ft_isascii(i) != 0)
		{
			print_caution("FAILED on negative value!");
			printf("	(Value: %i)\n", i);
			result = -3;
		}
		i++;
	}
	if (result != -3)
		print_result("Handles negative values.");
	return (result);
}

static int	test_isalnum(void)
{
	int	i;
	int	result;

	result = 1;
	i = '0';
	while (i <= '9')
	{
		if (ft_isalnum(i) == i)
			i++;
		else
		{
			print_caution("FAILED to print a digit ascii character");
			printf("	(ASCII: %i)\n", i);
			result = -1;
		}
	}
	if (result != -1)
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
			printf("	(ASCII: %i)\n", i);
			result = -2;
		}
	}
	if (result != -2)
		print_result("Prints all the alphabetic ascii characters.");
	i = -10;
	while (i <= 127)
	{
		if (!((i >= '0' && i <= '9') || (i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z')))
		{
			if (!!ft_isalnum(i) != !!isalnum(i))
			{
				print_caution("FAILED on non-alphanumeric character!");
				printf("	(ASCII: %i)\n", i);
				result = -3;
			}
		}
		i++;
	}
	if (result != -3)
		print_result("Handles negatives, special characters and non-alphanumerics correctly.");
	return (result);
}

static int	test_isdigit(void)
{
	int	i;
	int	result;

	result = 1;
	i = '0';
	while (i <= '9')
	{
		if (ft_isdigit(i) == i)
			i++;
		else
		{
			print_caution("FAILED to print a digit ascii character");
			result = -1;
		}
	}
	if (result != -1)
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
				result = -2;
			}
		}
		i++;
	}
	if (result != -2)
		print_result("Handles negatives,"
		" special characters and non-digits correctly.");
	return (result);
}

static int	test_isalpha(void)
{
	int	i;
	int	result;

	result = 1;
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
			result = -1;
			i++;
		}
	}
	if (result != -1)
		print_result("Prints all the alphabetic ascii characters.");
	i = -10;
	while (i <= 32)
	{
		if (ft_isalpha(i) != isalpha(i))
		{
			print_caution("FAILED on non-alphabetic character!");
			printf("	(ASCII: %i)\n", i);
			result = -2;
		}
		i++;
	}
	if (result != -2)
		print_result("Handles negatives, NULL and space characters.");
	return (result);
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
	//usleep(200000);
	printf("\1");
}
