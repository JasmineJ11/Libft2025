#include "../libft.h"

int	main(void)
{
	char src[] = "summer";
	char dest[] = "imissyou";
	size_t result;
	printf("before: %s\n", dest);
	result = ft_strlcat(dest, src, 11);
	printf("%zu\n", result);
	printf("after: %s\n", dest);
}