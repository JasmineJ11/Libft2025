#include "../libft.h"

int main(void)
{
	char *big = "12345355";
	char *little = "35";

	char *out = ft_strnstr(big, little, 8);
	printf("%s\n", out);
}