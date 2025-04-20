#include "../libft.h"

int	main(void)
{
	int *num = ft_calloc(4, sizeof(char));

	if (num == NULL)
	{
		printf("failed");
		return (1);
	}

	int i = 0;
	while (i < 4)
	{
		printf("%d\n", num[i]);
		i++;
	}

	num[0] = 4;
	num[3] = 8;

	int j = 0;
	while (j < 4)
	{
		printf("%d\n", num[j]);
		j++;
	}

	free(num);
	return (0);
}