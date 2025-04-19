#include "../libft.h"

int main(void)
{
	char *str1 = "  \n +++654";
	int num1 = atoi(str1);
	printf("%d\n\n",num1);

	char *str2 = "  \n +++654";
	int num2 = ft_atoi(str2);
	printf("%d\n\n",num2);
	
}