/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:42:12 by arocha-l          #+#    #+#             */
/*   Updated: 2021/11/16 16:27:37 by arocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	if (s)
	{
		if ((int)start >= ft_strlen((char *)s))
			len = 0;
		if ((int)len > ft_strlen((char *)s))
			len = ft_strlen((char *)s);
		sub = malloc(sizeof(char) * (len + 1));
		if (!sub)
			return (NULL);
		i = -1;
		while (len--)
		{
			sub[++i] = s[start];
			start++;
		}
		sub[++i] = '\0';
		return (sub);
	}
	else
		return (0);
}

/*int	main(int ac, char **av)
{
	if (ac > 1)
		printf("string: %s\nsubstring: %s", av[1], ft_substr(av[1], 7, 15));
}
*/
/*
int	main()
{
char	*str = "";
size_t	size = 0;
char	*ret = ft_substr(str, 5, size);
printf("");
printf("\n%s", ret);
}
*/
