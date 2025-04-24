#include "../libft.h"

char ttoupper(unsigned int i, char c)
{
	if(i % 2 == 0 )
		return (c -32);
	return c;	
}

int main(void)
{
	char *str = "abcdefg";
	char *res;
	res = ft_strmapi(str,ttoupper);
	printf("%s\n",res);
}