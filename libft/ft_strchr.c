/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:19:34 by arocha-l          #+#    #+#             */
/*   Updated: 2021/11/16 12:02:45 by arocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*p;
	char	*v;

	v = (char *)s;
	i = 0;
	while (v[i])
	{
		p = &v[i];
		if (v[i] == (char)c)
			return (p);
		i++;
	}
	if ((char)c == '\0')
		return (&v[i]);
	return (NULL);
}

/*int	main()
{
	char	a[] = "123456789";
	char	*p;
	char	c = 'a';

	p = strchr (a, c);
	printf("%s", p);
	printf("\nft:\n");
	p = ft_strchr (a, c);
	printf("%s", p);
}*/
