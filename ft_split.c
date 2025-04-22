/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:44:56 by jiawli            #+#    #+#             */
/*   Updated: 2025/04/21 16:44:58 by jiawli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"


static int word_len(char const *s, char c)
{
	int len = 0;
	while(s[len] && s[len] != c)
		len ++;
	return len;
}

static int count_word(const char *s, char c)
{
	int count = 0;
	while(*s)
	{
		if (*s != c)
		{
			count++;
			s += word_len(s,c);
		}
		else
			s++;
	}
	return count;
}

char **ft_split(char const *s, char c)
{
	char **array;
	int i ;

	if (s ==NULL)
		return NULL;
	array = malloc(sizeof(char *) * (word_len(s,c) + 1));
	if (array == NULL)
		return NULL;

	while(*s)
	{
		if (*s != c)
		{
			array[i] = 
		}
	}

}