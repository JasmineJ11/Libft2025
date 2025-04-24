#include "../libft.h"

int main ()
{
  // char buffer1[] = "abcd";
  // char buffer2[] = "abcda";
 
  // int n;

  // n = ft_memcmp ( buffer1, buffer2, sizeof(buffer1) );

  // printf("%d\n",n);

  // return 0;


 
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};
	

	int out = ft_memcmp(s2, s3, 4);
	printf("%i\n",out);
	write(1, "\n", 1);
	return (0);
}