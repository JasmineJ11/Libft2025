#include "../libft.h" 


int	main(void)
{
	char str[] = "abcde";
	char *out = ft_strchr(str, 'c');
	printf("%s\n", out);
}