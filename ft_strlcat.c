/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:42:35 by jiawli            #+#    #+#             */
/*   Updated: 2025/04/16 16:42:37 by jiawli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_l;
	size_t	src_l;

	i = 0;
	dest_l = 0;
	src_l = 0;
	while (dest[dest_l] != '\0')
		dest_l++;
	while (src[src_l] != '\0')
		src_l++;
	if (size <= dest_l)
	{
		return (dest_l + src_l);
	}
	while (src[i] != '\0' && size > dest_l + i + 1)
	{
		dest[dest_l + i] = src[i];
		i++; 
	}
	dest[dest_l + i] = '\0';
	return (dest_l + src_l);
}
int main(void)
{
	signal(SIGSEGV, sigsegv);
	title("ft_strlcat\t: ")
	
	char dest[30]; 
	memset(dest, 0, 30);
	char * src = (char *)"AAAAAAAAA";
	dest[0] = 'B';
	/* 1 */ 
	ft_strlcat(dest, src, 0) 
	strlen(src) 
	strcmp(dest, "B"); 
}