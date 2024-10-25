#include <ctype.h>

int	ft_toupper(int c)
{
	int	result;

	//if (c >= -128 && c <= -2)
	//	result = 256 - c;
	//else
	result = c;
	if (c >= 'a' && c <= 'z')
		result -= 32;
	if (result >= -128 && <= -2)
		result = -result;
	return (result);
}


int	main(void)
{
	int	j;

	j = -225;
	while (j <= 300)
	{
		if (toupper(j) != ft_toupper(j))
		{
			printf("i: %i, ori: %i, new: %i\n", j, toupper(j), ft_toupper(j));
		}
		j++;
	}
}