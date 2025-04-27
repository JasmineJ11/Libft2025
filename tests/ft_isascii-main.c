#include "../libft.h"

int main(void)
{
    // Test 1
	if (1 == ft_isascii('a'))
    printf("Test 1: OK\n");
else
    printf("Test 1: FAIL\n");

// Test 2
if (1 == ft_isascii('Z'))
    printf("Test 2: OK\n");
else
    printf("Test 2: FAIL\n");

// Test 3
if (1 == ft_isascii('0'))
    printf("Test 3: OK\n");
else
    printf("Test 3: FAIL\n");

// Test 4
if (1 == ft_isascii('\0'))
    printf("Test 4: OK\n");
else
    printf("Test 4: FAIL\n");

// Test 5
if (0 == ft_isascii(128))
    printf("Test 5: OK\n");
else
    printf("Test 5: FAIL\n");

// Test 6
if (0 == ft_isascii(211))
    printf("Test 6: OK\n");
else
    printf("Test 6: FAIL\n");
}