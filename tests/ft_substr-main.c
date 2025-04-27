#include "../libft.h"
#include <stdio.h>

int main(void)
{ 
	char *src = "1234";
	char *dest;
	dest = ft_substr(src, 4, 10);
	printf("%s\n", dest);
} 