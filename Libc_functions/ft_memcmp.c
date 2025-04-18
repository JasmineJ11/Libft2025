/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 09:22:37 by jiawli            #+#    #+#             */
/*   Updated: 2025/04/16 09:22:39 by jiawli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *str1 = (unsigned char *) s1;
	unsigned char *str2 = (unsigned char *) s2;

	size_t i = 0;
	while(i < n )
	{
		if (str1[i] != str2[i] || str1[i] == 0 )
		{
			return (str1[i] - str2[i]);
		}

		i++;
	}
	return 0;

}

int main ()
{
  char buffer1[] = "abcd";
  char buffer2[] = "abcda";

  int n;

  n = ft_memcmp ( buffer1, buffer2, sizeof(buffer1) );

  printf("%d\n",n);

  return 0;
}