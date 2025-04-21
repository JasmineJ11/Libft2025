#include "../libft.h"

int main(void)
{
	char *s1 = "123";
	char *s2 = "456";
	char *dest = ft_strjoin(s1,s2);
	printf("%s\n",dest);
}