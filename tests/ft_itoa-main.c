#include "../libft.h"


int main(void)
{
	char	*result0 = ft_itoa(657);
	char	*result1 = ft_itoa(-8475);
	char	*result2 = ft_itoa(2147483647);
	char	*result3 = ft_itoa(-2147483648);
	char	*result4 = ft_itoa(0);

	// Test 1
	if (result0[0] == '6')
		printf("Test 1: OK\n");
	else
		printf("Test 1: FAIL\n");

	// Test 2
	if (result0[3] == '\0')
		printf("Test 2: OK\n");
	else
		printf("Test 2: FAIL\n");

	// Test 3
	if (result1[0] == '-')
		printf("Test 3: OK\n");
	else
		printf("Test 3: FAIL\n");

	// Test 4
	if (result1[1] == '8')
		printf("Test 4: OK\n");
	else
		printf("Test 4: FAIL\n");
	
	// Test 5
	if (result2[0] == '2')
		printf("Test 5: OK\n");
	else
		printf("Test 5: FAIL\n");

	// Test 6
	if (result2[9] == '7')
		printf("Test 6: OK\n");
	else
		printf("Test 6: FAIL\n");

	// Test 7
	if (result3[0] == '-')
		printf("Test 7: OK\n");
	else
		printf("Test 7: FAIL\n");

	// Test 8
	if (result3[10] == '8')
		printf("Test 8: OK\n");
	else
		printf("Test 8: FAIL\n");

	// Test 9
	if (result4[0] == '0')
		printf("Test 9: OK\n");
	else
		printf("Test 9: FAIL\n");

	free(result0);
	free(result1);
	free(result2);
	free(result3);
	free(result4);
}