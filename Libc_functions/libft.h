/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftft.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:17:29 by jiawli            #+#    #+#             */
/*   Updated: 2025/04/15 10:17:31 by jiawli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h> 

int ft_atoi (const char *nptr);
void ft_bzero(void *str, size_t n);
int ft_isalnum (int c);
int	ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit( int c);
int ft_isprint (int c);
void *ft_memchr(const void *ptr, int value, size_t num);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy ( void * destination, const void * source, size_t num );
void *ft_memmove ( void * destination, const void * source, size_t n );
void	*ft_memset(void *ptr, int value, size_t num);
char *ft_strchr (const char *s, int c);
size_t ft_strlcat(char *dest, const char *src, size_t size);
size_t ft_strlcpy(char *dest, const char *src, size_t size);
size_t ft_strlen( const char *str);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *big, const char *little, size_t len);
char *ft_strrchr(const char *s, int c);
int ft_tolower(int c);
int	ft_toupper(int c);



#endif