/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:34:30 by jiawli            #+#    #+#             */
/*   Updated: 2025/04/15 14:34:31 by jiawli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memmove ( void * destination, const void * source, size_t n )
{
    unsigned char *dest = (unsigned char *) destination;
    unsigned char *src = (unsigned char *) source;
    if(dest == src && n == 0)
    {
        return dest;
    }
    if(dest > src && dest < src + n)
    {
        dest += n;
        src += n;
        while(n--)
            *--dest = *--src;
    }
    else
    {
        while(n--)
            *dest++ = *src++;
    }
    return destination;
}

int main(void)
{
    char str[] = "memmove can be very useful......";
    ft_memmove(str+20,str+15,11);
    printf("%s",str);
}
