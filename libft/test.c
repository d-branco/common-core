#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int i = isalpha(NULL);
	printf("%i", i);
}
