/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:02:02 by jiawli            #+#    #+#             */
/*   Updated: 2025/04/15 12:02:03 by jiawli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memcpy ( void * destination, const void * source, size_t num ){
    unsigned char *dest = (unsigned char *)destination;
    unsigned char *src = (unsigned char*) source;

    size_t i = 0;
    while(i < num)
    {
        dest[i] = src[i];
        i++;
    }
    return destination;
}

int main(void)
{
    char str1[5] = "abcd";
    char str2[10];
    printf("%s",ft_memcpy(str2,str1,4));
    
}
