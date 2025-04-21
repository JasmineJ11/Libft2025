#include "../libft.h"

int main(void)
{
    char str[] = "memmove can be very useful......";
    ft_memmove(str+20,str+15,11);
    printf("%s\n",str);
}