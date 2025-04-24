#include "../libft.h"

int	main(void)
{
	// char *str = "aaa,bb,ccc,dddd";
	// char c = ',';

	// int wordLen = word_len(str, c);
	// printf("WordLen: %i\n", wordLen);

	// int countWord = count_word(str, c);
	// printf("CountWord: %i\n", countWord);

	// char **out = ft_split(str, c);

	// int i = 0;

	// while (out[i])
	// {
	// 	printf("%s\n", out[i]);
	// 	i++;
	// }


	char	**result0 = ft_split("  Hello my name is Boris  ", ' ');
	char	**result1 = ft_split("", ' ');
	size_t	result0_len = 5;
	size_t	i = 0;

	// Test 1
	if (result0[0][0] == 'H')
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");

	// Test 2
	if (result0[1][0] == 'm')
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	if (result0[4][4] == 's')
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");

	// Test 4
	if (result1[0] == NULL)
		printf("Test 4: OK\n");
	else
		printf("Test 4: FAIL\n");
	
	while (i < result0_len)
	{
		free(result0[i]);
		i++;
	}
	free(result0);
	free(result1[0]);
	free(result1);
}