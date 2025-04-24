/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 09:02:57 by jiawli            #+#    #+#             */
/*   Updated: 2025/04/24 09:03:00 by jiawli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int i;

	if(!s || !f)
		return ;
	
	i = 0;
	while(s[i] != '\0')
	{
		f(i,&s[i]);
		i++;
	}
}
// void ttouuper(unsigned i, char *c)
// {
// 	if (i % 2 == 0)
// 	{
// 		*c = *c -32;
// 	}
	
// }
// int main(void)
// {
// 	char str[] = "abcdefg";
// 	ft_striteri(str,ttouuper);
// 	printf("%s\n",str);
// }