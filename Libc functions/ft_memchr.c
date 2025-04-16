/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 08:03:36 by jiawli            #+#    #+#             */
/*   Updated: 2025/04/16 08:03:37 by jiawli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memchr(const void *ptr, int value, size_t num)
{
	unsigned char *p = (unsigned char *) ptr;
	unsigned char v = (unsigned char ) value;

	size_t i = 0;
	while(i < num)
	{
		if(p[i] == v)
		{
			return p + i;
		}
		i++;
	}
	return NULL;
}

int main(void)
{
	char str[] = "abcde";
	char *out = (char*)ft_memchr(str,'c',5);
	printf("%s",out);
}