#include "../libft.h" 


int	main(void)
{
	char str[] = "abcde";
	char *out = ft_strchr(str, '\0');
	printf("%s\n", out);
}