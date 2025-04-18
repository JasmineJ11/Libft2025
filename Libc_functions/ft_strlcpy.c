/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 09:43:30 by jiawli            #+#    #+#             */
/*   Updated: 2025/04/16 09:43:32 by jiawli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t src_l = 0;
	while(src[src_l] != 0)
	{
		src_l++;
	}

	if(size == 0)
	{
		return src_l;
	}


	size_t i = 0;
	while(i < size - 1 && src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return src_l;
}


int main(void)
{
	char str[] = "12345abcde";
	char dest1[10];
	char dest2[5];

	size_t out1 = ft_strlcpy(dest1, str,15);
	printf("%zu\n",out1);
	printf("%s\n",dest1);
	size_t out2 = ft_strlcpy(dest2, str,2);
	printf("%zu\n",out2);
	printf("%s\n",dest2);

}