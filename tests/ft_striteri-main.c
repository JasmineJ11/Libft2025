#include "../libft.h"

void ttouuper(unsigned i, char *c)
{
	if (i % 2 == 0)
	{
		*c = *c -32;
	}
	
}
int main(void)
{
	char str[] = "abcdefg";
	ft_striteri(str,ttouuper);
	printf("%s\n",str);
}