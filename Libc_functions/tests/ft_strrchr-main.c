#include "../libft.h"


int main(void)
{
	char str[] = "abcdecaa";
	char *out = ft_strrchr(str,'c');
	printf("%s\n",out);
}