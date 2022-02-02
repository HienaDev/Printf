/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:37:21 by arocha-l          #+#    #+#             */
/*   Updated: 2021/11/19 12:55:50 by arocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	j;
	unsigned int	sizedest;
	unsigned int	sizesrc;

	sizedest = 0;
	sizesrc = 0;
	while (dest[sizedest] != '\0')
		sizedest++;
	j = sizedest;
	while (src[sizesrc] != '\0')
		sizesrc++;
	if (size <= j)
		return (size + sizesrc);
	else
	{
		while (*src != '\0' && size - j - 1 > 0)
		{
			dest[j] = *src;
			j++;
			src++;
		}
		dest[j] = '\0';
	}
	return (sizesrc + sizedest);
}

/*int	main()
{
	char a[20] = "ola";
	char b[] = "amigosds";
	unsigned int sizeA = 0;
	char c[20] = "ola";
	char d[] = "amigosds";
	unsigned int sizeB = 0;

	printf("%u", ft_strlcat(a, b, sizeA));
	printf("\n");
	printf("%lu", strlcat(c, d, sizeB));
}*/
