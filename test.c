

 #include "libft.h"

// int atoi (const char *nptr)
// {
	
// }/* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_bzero.c                                         :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/04/16 12:01:29 by jiawli            #+#    #+#             */
// /*   Updated: 2025/04/16 12:01:31 by jiawli           ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */


// #include "libft.h"

// void ft_bzero(void *str, size_t n)
// {
// 	unsigned char *s = (unsigned char *)str;
// 	size_t i = 0;
// 	while(i < n)
// 	{
// 		s[i] = 0;
// 		i++;
// 	}
	
// }

// int main(void)
// {
// 	char str[] = "123456";
// 	ft_bzero(str,4);
// 	printf("%s", str);
// }/* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_isalnum.c                                       :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/04/15 10:00:44 by jiawli            #+#    #+#             */
// /*   Updated: 2025/04/15 10:00:47 by jiawli           ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */


// #include "libft.h"

// int ft_isalnum (int c)
// {
//     if(ft_isalpha(c) != 0)
//     {
//         return c;
//     }
//     else if (ft_isdigit(c) != 0)
//     {
//         return c;
//     }
//     return 0;
// }

int main(void)
{
	printf("ft_isalnum: ");
    assert(ft_strlen("abc") == 3);
    int out = ft_isalnum('a');
    printf("%d\n", out);
}

// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_isalpha.c                                       :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/04/15 09:19:24 by jiawli            #+#    #+#             */
// /*   Updated: 2025/04/15 09:19:32 by jiawli           ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */
// #include "libft.h"


// int	ft_isalpha(int c)
// {
// 	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
// 	{
// 		return (c);
// 	}
// 	return (0);
// }

// // int main (void)
// // {
// //     int out = ft_isalpha('a');
// //     printf("%c",out);
// // }/* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_isascii.c                                       :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/04/15 11:12:04 by jiawli            #+#    #+#             */
// /*   Updated: 2025/04/15 11:12:06 by jiawli           ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "libft.h"

// int ft_isascii(int c)
// {
//     return (c >= 0 && c <=127);
// }

// int main(void)
// {
//     int output = ft_isascii(231);
//     printf("%d",output);
// }/* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_isdigit.c                                       :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/04/15 09:52:38 by jiawli            #+#    #+#             */
// /*   Updated: 2025/04/15 09:52:47 by jiawli           ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */


// #include "libft.h"

// int ft_isdigit( int c)
// {
//     if (c >= 0 && c <= 9)
//     {
//         return c;
//     }
//     return 0;
// }

// // int main(void)
// // {
// //     int out = ft_isdigit(5);
// //     printf("%d", out);
// // }
// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_isprint.c                                       :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/04/15 11:18:53 by jiawli            #+#    #+#             */
// /*   Updated: 2025/04/15 11:18:54 by jiawli           ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */
// #include "libft.h"

// int ft_isprint (int c)
// {
//     return  (c >=' ' && c <= '~');
// }

// int main(void)
// {
//     int output = ft_isprint('\n');
//     printf("%d",output);
// }/* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_memchr.c                                        :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/04/16 08:03:36 by jiawli            #+#    #+#             */
// /*   Updated: 2025/04/16 08:03:37 by jiawli           ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include <stdio.h>

// void *ft_memchr(const void *ptr, int value, size_t num)
// {
// 	unsigned char *p = (unsigned char *) ptr;
// 	unsigned char v = (unsigned char ) value;

// 	size_t i = 0;
// 	while(i < num)
// 	{
// 		if(p[i] == v)
// 		{
// 			return p + i;
// 		}
// 		i++;
// 	}
// 	return NULL;
// }

// int main(void)
// {
// 	char str[] = "abcde";
// 	char *out = (char*)ft_memchr(str,'c',5);
// 	printf("%s",out);
// }/* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_memcmp.c                                        :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/04/16 09:22:37 by jiawli            #+#    #+#             */
// /*   Updated: 2025/04/16 09:22:39 by jiawli           ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */


// #include <stdio.h>

// int ft_memcmp(const void *s1, const void *s2, size_t n)
// {
// 	unsigned char *str1 = (unsigned char *) s1;
// 	unsigned char *str2 = (unsigned char *) s2;

// 	size_t i = 0;
// 	while(i < n )
// 	{
// 		if (str1[i] != str2[i] || str1[i] == 0 )
// 		{
// 			return (str1[i] - str2[i]);
// 		}

// 		i++;
// 	}
// 	return 0;

// }

// int main ()
// {
//   char buffer1[] = "abcd";
//   char buffer2[] = "abcda";

//   int n;

//   n = ft_memcmp ( buffer1, buffer2, sizeof(buffer1) );

//   printf("%d\n",n);

//   return 0;
// }/* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_memcpy.c                                        :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/04/15 12:02:02 by jiawli            #+#    #+#             */
// /*   Updated: 2025/04/15 12:02:03 by jiawli           ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include <stdio.h>

// void *ft_memcpy ( void * destination, const void * source, size_t num ){
//     unsigned char *dest = (unsigned char *)destination;
//     unsigned char *src = (unsigned char*) source;

//     size_t i = 0;
//     while(i < num)
//     {
//         dest[i] = src[i];
//         i++;
//     }
//     return destination;
// }

// int main(void)
// {
//     char str1[5] = "abcd";
//     char str2[10] = "12345";
//     char *out = ft_memcpy(str2,str1,4);
//     printf("%s",out);
    
// }
// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_memmove.c                                       :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/04/15 14:34:30 by jiawli            #+#    #+#             */
// /*   Updated: 2025/04/15 14:34:31 by jiawli           ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include <stdio.h>

// void *ft_memmove ( void * destination, const void * source, size_t n )
// {
//     unsigned char *dest = (unsigned char *) destination;
//     unsigned char *src = (unsigned char *) source;
//     if(dest == src && n == 0)
//     {
//         return dest;
//     }
//     if(dest > src && dest < src + n)
//     {
//         dest += n;
//         src += n;
//         while(n--)
//             *--dest = *--src;
//     }
//     else
//     {
//         while(n--)
//             *dest++ = *src++;
//     }
//     return destination;
// }

// int main(void)
// {
//     char str[] = "memmove can be very useful......";
//     ft_memmove(str+20,str+15,11);
//     printf("%s",str);
// }
// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_memset.c                                        :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/04/15 11:37:32 by jiawli            #+#    #+#             */
// /*   Updated: 2025/04/15 11:37:33 by jiawli           ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include <stdio.h>

// void	*ft_memset(void *ptr, int value, size_t num)
// {
// 	unsigned char	*p;
// 	unsigned char	v;
// 	size_t			i;

// 	p = (unsigned char *)ptr;
// 	v = (unsigned char)value;
// 	i = 0;
// 	while (i < num)
// 	{
// 		p[i] = v;
// 		i++;
// 	}
// 	return (ptr);
// }

// int	main(void)
// {
// 	char str[] = "abcde 456456";
// 	char *out = ft_memset(str, '-', 3);
// 	printf("%s", out);
// }/* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_strchar.c                                       :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/04/17 09:42:09 by jiawli            #+#    #+#             */
// /*   Updated: 2025/04/17 09:42:11 by jiawli           ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */


// #include "libft.h"

// char *ft_strchr (const char *s, int c)
// {
// 	char *str = ( char *)s;

// 	size_t i = 0;
// 	while(str[i])
// 	{
// 		if (str[i] == c)
// 		{
// 			return str + i;
// 		}
// 		i++;
// 	}

// 	if ( c == '\0')
// 	{
// 		return str + i;
// 	}
// 	return NULL;
// }

// int main(void)
// {
// 	char str[] = "abcde";
// 	char *out = ft_strchr(str,'\0');
// 	printf("%s\n",out);
// }/* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_strlcat.c                                       :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/04/16 16:42:35 by jiawli            #+#    #+#             */
// /*   Updated: 2025/04/16 16:42:37 by jiawli           ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "libft.h"

// size_t ft_strlcat(char *dest, const char *src, size_t size)
// {
// 	size_t i = 0;
// 	size_t dest_l = 0;
// 	size_t src_l = 0;

// 	//1.计算src和dest的长度。

// 	while(dest[dest_l] != '\0')
// 		dest_l++;
// 	while(src[src_l] != '\0')
// 		src_l++;

// 	//2.如果size <= dest，直接返回所需要的长度。
// 	if (size <= dest_l)
// 	{
// 		return dest_l + src_l;
// 	}
	
// 	//3. 否则就开始一个一个往后添加，再返回长度。不要忘了添加结束符。
// 	while(src[i] != '\0' && size > dest_l + i + 1)
// 	{
// 		dest[dest_l + i] = src[i];
// 		i++;
// 	}
// 	dest[dest_l + i] = '\0';
// 	return dest_l + src_l;
	
// }
// int	main(void)
// {
// 	char src[] = "summer";
// 	char dest[] = "imissyou";
// 	size_t result;
// 	printf("%s\n", dest);
// 	result = ft_strlcat(dest, src, 10);
// 	printf("%zu\n", result);
// 	printf("%s\n", dest);
// }/* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_strlcpy.c                                       :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/04/16 09:43:30 by jiawli            #+#    #+#             */
// /*   Updated: 2025/04/16 09:43:32 by jiawli           ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */


// #include "libft.h"

// size_t ft_strlcpy(char *dest, const char *src, size_t size)
// {
// 	size_t src_l = 0;
// 	while(src[src_l] != 0)
// 	{
// 		src_l++;
// 	}

// 	if(size == 0)
// 	{
// 		return src_l;
// 	}


// 	size_t i = 0;
// 	while(i < size - 1 && src[i] != 0)
// 	{
// 		dest[i] = src[i];
// 		i++;
// 	}
// 	dest[i] = '\0';
// 	return src_l;
// }


// int main(void)
// {
// 	char str[] = "12345abcde";
// 	char dest1[10];
// 	char dest2[5];

// 	size_t out1 = ft_strlcpy(dest1, str,15);
// 	printf("%zu\n",out1);
// 	printf("%s\n",dest1);
// 	size_t out2 = ft_strlcpy(dest2, str,2);
// 	printf("%zu\n",out2);
// 	printf("%s\n",dest2);

// }/* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_strlen.c                                        :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/04/15 11:24:57 by jiawli            #+#    #+#             */
// /*   Updated: 2025/04/15 11:25:00 by jiawli           ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "libft.h"

// size_t strlen( const char *str)
// {
//     size_t i = 0;
//     while(str[i])
//     {
//         i++;
//     }
//     return i;
// }

// int main(void)
// {
//     const char str[] = "asdf";
//     size_t out = strlen(str);
//     printf("%zu",out);

// }/* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_strncmp.c                                       :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/04/17 11:27:29 by jiawli            #+#    #+#             */
// /*   Updated: 2025/04/17 11:27:30 by jiawli           ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */
// #include "libft.h"

// int ft_strncmp(const char *s1, const char *s2, size_t n)
// {

// 	char *str1 = (char *)s1;
// 	char *str2 = (char *)s2;

// 	size_t i = 0;

// 	while (i < n)
// 	{
// 		if(str1[i] == '\0' || str1[i] != str2[i] )
// 		{
// 			return str1[i] - str2[i];
// 		}
// 		i++;
// 	}
// 	return 0;
// }

// int main(void)
// {
// 	char str1[] = "abcde";
// 	char str2[] = "abcdea";
// 	int out = ft_strncmp(str1,str2,10);
// 	printf("%d\n",out);
// }/* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_strnstr.c                                       :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/04/17 12:08:21 by jiawli            #+#    #+#             */
// /*   Updated: 2025/04/17 12:08:23 by jiawli           ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */


// #include "libft.h"

// char *ft_strnstr(const char *big, const char *little, size_t len)
// {
// 	size_t i = 0;

// 	size_t j ;

// 	if (little [0] == '\0')
// 	{
// 		return (char *) big;
// 	}

// 	while(big[i] != 0 && i < len)
// 	{
// 		j = 0;
// 		while(big[i+j] == little[j] && i+j <len)
// 		{
// 			if(little[j+1] == '\0')
// 				return (char *) big + i;
// 			j++;
// 		}

// 		i++;
// 	}
// 	return NULL;
// }

// int main(void)
// {
// 	char *big = "12345355";
// 	char *little = "35";

// 	char *out = ft_strnstr(big, little, 8);
// 	printf("%s\n", out);
// }/* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_strrchr.c                                       :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/04/17 10:23:03 by jiawli            #+#    #+#             */
// /*   Updated: 2025/04/17 10:23:04 by jiawli           ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */


// #include "libft.h"

// char *ft_strrchr(const char *s, int c)
// {
// 	char *str = (char *) s;
// 	char *out = NULL;

// 	size_t i = 0;

// 	while(str[i] != '\0')
// 	{
// 		if(str[i] == c)
// 		{
// 			out = str + i;
// 		}
// 		i++;
// 	}

// 	if (c == '\0')
// 	{
// 		return str + i;
// 	}

// 	return out;

// }

// int main(void)
// {
// 	char str[] = "abcdecaa";
// 	char *out = ft_strrchr(str,'\0');
// 	printf("%s\n",out);
// }/* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_tolower.c                                       :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/04/17 09:38:22 by jiawli            #+#    #+#             */
// /*   Updated: 2025/04/17 09:38:23 by jiawli           ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */


// #include "libft.h"

// int ft_tolower(int c)
// {
// 	if(c >= 'A' && c <= 'Z')
// 	{
// 		c = c + 32;
// 	}
// 	return c;
// }

// int main(void)
// {
// 	char c = 'A';
// 	int out = ft_tolower(c);
// 	printf("%c",out);
// }/* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_toupper.c                                       :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/04/15 17:15:26 by jiawli            #+#    #+#             */
// /*   Updated: 2025/04/15 17:15:28 by jiawli           ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include <stdio.h>

// int	ft_toupper(int c)
// {
// 	if (c >= 'a' && c <= 'z')
// 	{
// 		c = c - 32;
// 	}
// 	return (c);
// }

// int	main(void)
// {
// 	int i = 0;
// 	char str[] = "Test String.\n";
// 	char c;
// 	while (str[i])
// 	{
// 		c = str[i];
// 		putchar(ft_toupper(c));
// 		i++;
// 	}
// 	return (0);
// }ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c
