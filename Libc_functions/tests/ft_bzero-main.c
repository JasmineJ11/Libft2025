#include "../libft.h"

int	main(void)
{
	char str[] = "123456";
	ft_bzero(str, 4);
	int i = 0;
	while (i < 6)
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
}