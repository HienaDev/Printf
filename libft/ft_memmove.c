/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:32:56 by arocha-l          #+#    #+#             */
/*   Updated: 2021/11/01 17:39:53 by arocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*subdst;
	unsigned char	*subsrc;

	if (dst == NULL && src == NULL)
		return (NULL);
	subdst = (unsigned char *)dst;
	subsrc = (unsigned char *)src;
	if (subdst < subsrc)
	{
		while (len--)
		{
			*subdst = *subsrc;
			subdst++;
			subsrc++;
		}
	}
	else
	{
		while (len--)
		{
			subdst[len] = subsrc[len];
		}
	}
	return (dst);
}

/*int	main()
{
//	char s1[] = "Ola";
	char s2[] = "batman";
//	char s3[] = "Ola";
	char s4[] = "batman";

	memmove(&s2[2], s2, 4);
	printf("%s\n", s2);
	ft_memmove(&s4[2], s4, 4);
	printf("%s", s4);
}
*/
/*int main()
{
   //declaring and initializing character array
   char str1[ ] = "Learn C from trytoprogram.com";
   char str2[ ] = "trytoprogram.com";
   char str3[ ] = "Hello World !!!";

   //displaying str1, str2 and str3
   printf("str1 = %s\n", str1);
   printf("str2 = %s\n", str2);
   printf("str3 = %s\n", str3);

   ft_memmove(str1, str2, 12);
   ft_memmove(str3, &str3[6], 5);

   printf("\nAfter using memmove,\n"
          "\nstr1 = %s\n"
          "\nstr3 = %s\n", str1, str3);

   return 0;
}*/
