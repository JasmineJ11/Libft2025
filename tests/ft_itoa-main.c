#include "../libft.h"


int main(void)
{
	int nbr = 1234;
	int intLen = int_len(nbr);
	printf("intLen: %d\n", intLen);

	char *result = ft_itoa(nbr);
	printf("result: %s\n",result);
}