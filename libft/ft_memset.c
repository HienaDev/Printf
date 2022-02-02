/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:56:54 by arocha-l          #+#    #+#             */
/*   Updated: 2021/11/19 12:53:00 by arocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*sub;

	sub = (unsigned char *)str;
	while (len--)
	{
		*sub = (unsigned char)c;
		sub++;
	}
	return (str);
}

/*int	main()
{
	char s1[] = "Ola amigos";
	char s2[] = "Ola amigos";

	ft_memset(s1, 'z', 10);
	memset(s2, 'z', 10);
	printf("%s\n", s1);
	printf("%s", s2);
}*/
