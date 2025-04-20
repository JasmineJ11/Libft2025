#include "../libft.h"

int	main(void)
{
	char str[] = "abcde 456456";
	char *out = ft_memset(str, '-', 3);
	printf("%s\n", out);
} 