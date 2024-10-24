/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   main_test.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: abessa-m <abessa-m@student.42porto.com>	+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/10/23 13:33:40 by abessa-m		  #+#	#+#			 */
/*   Updated: 2024/10/24 13:00:05 by abessa-m		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <ctype.h>
#include <unistd.h>

static int		test_isalpha();
static int		test_isdigit();
static int		test_isalnum();
static int		test_isascii();
static void		print_result(char *message);
static void		print_caution(char *message);
static void		print_warning(char *file_name, char *message);
static void		suspense();

int	main(int argc, char **argv)
{
	int	i;
	int	aval;

	i = 1;
	aval = 0;
	while (i < argc)
	{
		if (!strcmp(argv[i], "ft_isalpha.c"))
			aval = test_isalpha(argv[i]);
		if (!strcmp(argv[i], "ft_isdigit.c"))
			aval = test_isdigit(argv[i]);
		if (!strcmp(argv[i], "ft_isalnum.c"))
			aval = test_isalnum(argv[i]);
		if (!strcmp(argv[i], "ft_isascii.c"))
			aval = test_isascii(argv[i]);


		if (aval == 0)
			print_warning(argv[i], "has no test yet!");
		i++;
	}
}

static int	test_isascii(){
	int	i;

	i = 0;
	while (i <= 127)
	{
		if (ft_isascii(i) != 1)
		{
			print_caution("FAILED on valid ASCII character!");
			printf("(ASCII: %i)", i);
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
			printf("(Value: %i)", i);
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
			printf("(Value: %i)", i);
			return (-1);
		}
		i++;
	}
	print_result("Handles negative values.");

	return (1);
}

static int test_isalnum(){
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
		if (!((i >= '0' && i <= '9') || 
			  (i >= 'A' && i <= 'Z') || 
			  (i >= 'a' && i <= 'z')))
		{
			if (!!ft_isalnum(i) != !!isalnum(i))
			{
				print_caution("FAILED on non-alphanumeric character!");
				printf("(ASCII: %i)", i);
				return (-1);
			}
		}
		i++;
	}
	print_result("Handles negatives, special characters and non-alphanumerics correctly.");
	return (1);
}


static int test_isdigit(){
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
	while (i <= 127)  // Extended to cover full ASCII range
	{
		if (i < '0' || i > '9')  // Only test non-digit characters
		{
			if (!!ft_isdigit(i) != !!isdigit(i))
			{
				print_caution("FAILED on non-digit character!");
				printf("(ASCII: %i)", i);
				return (-1);
			}
		}
		i++;
	}
	print_result("Handles negatives, special characters and non-digits correctly.");
	return (1);
}


static int	test_isalpha()
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
			printf("(ASCII: %i)", i);
			return (-1);
		}
		i++;
	}
	print_result("Handles negatives, NULL and space characters.");
	return (1);
}

static void	print_result(char *message){
	printf("	\033[0;32m%s\033[0m\n", message);
	suspense();
}

static void	print_caution(char *message){
	printf("	\033[41m%s\033[0m\n", message);
}

static void	print_warning(char *file_name, char *message){
	printf("	\033[0;93m%s: %s\033[0m\n", file_name, message);
	suspense();
}

static void	suspense()
{
	usleep(200000);
}
