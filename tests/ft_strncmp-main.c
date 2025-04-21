#include "../libft.h"

int main(void)
{
	char str1[] = "abcde";
	char str2[] = "abcdea";
	int out = ft_strncmp(str1,str2,10);
	printf("%d\n",out);
}