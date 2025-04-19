#include "../libft.h"

int	main(void)
{
	printf("\nft_isalnum\n");
	printf("Input: 'a' | Return: %d\n", ft_isalnum('a'));
	printf("Input: 'Z' | Return: %d\n", ft_isalnum('Z'));
	printf("Input: '0' | Return: %d\n", ft_isalnum('0'));
	printf("Input: ';' | Return: %d\n", ft_isalnum(';'));

	printf("\nisalnum\n");
	printf("Input: 'a' | Return: %d\n", isalnum('a'));
	printf("Input: 'Z' | Return: %d\n", isalnum('Z'));
	printf("Input: '0' | Return: %d\n", isalnum('0'));
	printf("Input: ';' | Return: %d\n", isalnum(';'));
}