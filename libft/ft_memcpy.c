/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:05:53 by arocha-l          #+#    #+#             */
/*   Updated: 2021/11/19 12:54:25 by arocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*subdst;
	unsigned char	*subsrc;

	if (dst == NULL && src == NULL)
		return (NULL);
	subdst = (unsigned char *)dst;
	subsrc = (unsigned char *)src;
	while (n--)
	{
		*subdst = *subsrc;
		subdst++;
		subsrc++;
	}
	return (dst);
}

/*int	main()
{
//	char s1[] = "Ola";
	char s2[] = "batman";
//	char s3[] = "Ola";
	char s4[] = "batman";

	memcpy(&s2[2], s2, 4);
	printf("%s\n", s2);
	ft_memcpy(&s4[2], s4, 4);
	printf("%s", s4);
}*/

/*int	main()
{
	char s1[] = "Ola";
	char s2[] = "batman";

	memcpy(s1, s2, 4);
	printf("%s\n", s1);
	ft_memcpy(s1, s2, 4);
	printf("%s", s1);
}*/

/*int	main(void)
{
	char s1[] = "Eu gosto da moli";
	char s2[] = "Mentira";
	printf("Meu:%s\n", ft_memcpy(s1, s2, 4));
	char	s3[] = "Eu gosto da moli";
	char	s4[] = "Mentira";
	printf("Ori:%s\n", memcpy(s3, s4, 4));
}*/
