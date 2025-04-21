#include "../libft.h"

int main(void)
{
    char str1[5] = "abcd";
    char str2[10] = "12345";
    char *out = ft_memcpy(str2,str1,4);
    printf("%s\n",out);
    
}