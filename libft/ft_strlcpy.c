/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 19:52:11 by arocha-l          #+#    #+#             */
/*   Updated: 2021/11/01 15:12:52 by arocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	z;

	z = 0;
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (size != 0)
	{
		while (src[z] != '\0' && z < (size - 1))
		{
			dest[z] = src[z];
			z++;
		}
		dest[z] = '\0';
	}
	return (i);
}
/*int	main(void)
{
	char finalsrc[] = "Vamoss  .";
	char src[] = "Vamos.";
	printf("Frase: %s \n", src);
	printf("Caracteres 'printaveis': %d\n", ft_strlcpy(finalsrc, src, 5));
}*/
