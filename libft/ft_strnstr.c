/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:55:36 by arocha-l          #+#    #+#             */
/*   Updated: 2021/11/01 18:18:30 by arocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t		k;
	size_t		i;
	char		*c;

	c = (char *)hay;
	k = 0;
	i = 0;
	if (needle[0] == '\0' || needle == NULL)
		return (c);
	while (hay[k] != '\0' && k < len)
	{
		while (hay[k + i] == needle[i] && (k + i) < len)
		{
			i++;
			if (needle[i] == '\0')
				return (&c[k]);
		}
		i = 0;
		k++;
	}
	return (NULL);
}

/*int	main()
{
	char	a[] = "oh no not the empty string !";
	char need[] = "";
	size_t		i = 0;

	printf("%s", strnstr(a, need, i));
	printf("\nft:\n");
	printf("%s", ft_strnstr(a, need, i));
}*/
