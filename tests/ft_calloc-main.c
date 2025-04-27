#include "../libft.h"

int	main(void)
{
	size_t	nmemb = 2;
	size_t	size = 3;
	char	*buffer = ft_calloc(nmemb, size);

	// Test 1
	if (buffer[0] == '\0')
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");

	// Test 2
	if (buffer[1] == '\0')
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	if (buffer[2] == '\0')
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");

	// Test 4
	if (buffer[3] == '\0')
		printf("Test 4: OK\n");
	else
		printf("Test 4: FAIL\n");

	// Test 5
	if (buffer[4] == '\0')
		printf("Test 5: OK\n");
	else
		printf("Test 5: FAIL\n");

	// Test 6
	if (buffer[5] == '\0')
		printf("Test 6: OK\n");
	else
		printf("Test 6: FAIL\n");
	
	free(buffer);
}