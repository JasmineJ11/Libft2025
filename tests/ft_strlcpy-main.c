#include "../libft.h"

int main(void)
{
	char str1[] = "12345abcde";
	char str2[] = "12345abcde";
	char dest1[10];
	char dest2[5];
	

	printf("out1: \n");
	size_t out1 = ft_strlcpy(dest1, str1,2);
	printf("%zu\n",out1);
	printf("%s\n",dest1);

	
	printf("out2: \n");
	size_t out2 = ft_strlcpy(dest2, str2,15);
	printf("%zu\n",out2);
	printf("%s\n",dest2);



	

	// printf("\nft_strlcpy\n");
	// char dst2[13] = "123456";
	// char src2[13] = "Hello world!";
	// printf("Input: dst \"123456\", src \"Hello world!\", 0 | Return: %zu, dst %s\n", ft_strlcpy(dst2, src2, 0), dst2);
	// char dst3[13] = "123456";
	// char src3[13] = "Hello world!";
	// printf("Input: dst \"123456\", src \"Hello world!\", 3 | Return: %zu, dst %s\n", ft_strlcpy(dst3, src3, 3), dst3);
	// char dst4[13] = "123456";
	// char src4[13] = "";
	// printf("Input: dst \"123456\", src \"\", 13 | Return: %zu, dst %s\n", ft_strlcpy(dst4, src4, 13), dst4);
	// char dst5[13] = "123456";
	// char src5[13] = "Hello world!";
	// printf("Input: dst \"123456\", src \"Hello world!\", 13 | Return: %zu, dst %s\n", ft_strlcpy(dst5, src5, 13), dst5);

}