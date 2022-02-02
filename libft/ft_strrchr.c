/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:46:09 by arocha-l          #+#    #+#             */
/*   Updated: 2021/11/16 12:01:39 by arocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;
	char	*v;
	int		k;

	v = (char *)s;
	i = 0;
	while (s[i])
		i++;
	k = i;
	while (--i > -1)
	{
		p = &v[i];
		if (s[i] == (char)c)
			return (p);
	}
	if ((char)c == '\0')
		return (&v[k]);
	return (NULL);
}

/*int	main()
{
	char	a[] = "baba batman";
	char	*p;
	char	c = 'b';

	p = strrchr (a, c);
	printf("%s", p);
	printf("\nft:\n");
	p = ft_strrchr (a, c);
	printf("%s", p);
}*/
