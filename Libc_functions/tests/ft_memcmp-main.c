#include "../libft.h"

int main ()
{
  char buffer1[] = "abcd";
  char buffer2[] = "abcda";

  int n;

  n = ft_memcmp ( buffer1, buffer2, sizeof(buffer1) );

  printf("%d\n",n);

  return 0;
}