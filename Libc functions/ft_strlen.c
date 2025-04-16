/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:24:57 by jiawli            #+#    #+#             */
/*   Updated: 2025/04/15 11:25:00 by jiawli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t strlen( const char *str)
{
    size_t i = 0;
    while(str[i])
    {
        i++;
    }
    return i;
}

int main(void)
{
    const char str[] = "asdf";
    size_t out = strlen(str);
    printf("%zu",out);

}