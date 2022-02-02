/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:44:16 by arocha-l          #+#    #+#             */
/*   Updated: 2021/11/19 12:53:48 by arocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	*ft_bzero(void *str, size_t len)
{
	unsigned char	*sub;

	sub = (unsigned char *)str;
	while (len--)
	{
		*sub = '\0';
		sub++;
	}
	return (str);
}

/*int	main()
{
	char s1[] = "Ola amigos";
	char s2[] = "Ola amigos";

	ft_bzero(s1 + 2, 5);
	bzero(s2 + 2, 5);
	printf("%s\n", s1);
	printf("%s", s2);
}*/
