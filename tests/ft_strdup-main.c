#include "../libft.h"
#include <stdio.h>


int main(void)
{
	char	*result0 = ft_strdup("Hello world!");
	char	*result1 = ft_strdup("BORIS");
	char	*result2 = ft_strdup("");

	// Test 1
	if (result0[0] == 'H')
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");

	// Test 2
	if (result1[0] == 'B')
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	if (result1[5] == '\0')
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");

	// Test 4
	if (result2[0] == '\0')
		printf("Test 4: OK\n");
	else
		printf("Test 4: FAIL\n");

	printf("%s\n", result1);
	free(result0);
	free(result1);
	free(result2);

} 