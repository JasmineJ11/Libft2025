#include "../libft.h"

int	main(void)
{
	int i = 0;
	char str[] = "Test String.\n";
	char c;
	while (str[i])
	{
		c = str[i];
		putchar(ft_toupper(c));
		i++;
	}
	return (0);
}