#include "../libft.h"

int main(void)
{
	char str[] = "abcde";
	char *out = (char*)ft_memchr(str,'c',5);
	printf("%s",out);
	printf("\n");
}