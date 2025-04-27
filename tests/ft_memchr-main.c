#include "../libft.h"

int main(void)
{
	char	*result0 = (char *)ft_memchr("Hello world!", 'l', 13);
	char	*result1 = (char *)ft_memchr("Hello world!", 'd', 3);
	char	*result2 = (char *)ft_memchr("Hello world!", 'y', 13);
	char	*result3 = (char *)ft_memchr("Hello world!", '\0', 13);
	char	*result4 = (char *)ft_memchr("Hello world!", '\0', 12);

	// Test 1
	if (result0[0] == 'l' && result0[1] == 'l')
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");

	// Test 2
	if (result0[1] == 'l')
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	if (result1 == NULL)
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");

	// Test 4
	if (result2 == NULL)
		printf("Test 4: OK\n");
	else
		printf("Test 4: FAIL\n");

	// Test 5
	if (result3[0] == '\0')
		printf("Test 5: OK\n");
	else
		printf("Test 5: FAIL\n");

	// Test 6
	if (result4 == NULL)
		printf("Test 6: OK\n");
	else
		printf("Test 6: FAIL\n");
}