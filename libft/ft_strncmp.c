/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 19:53:31 by arocha-l          #+#    #+#             */
/*   Updated: 2021/11/19 12:58:54 by arocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*sub1;
	unsigned char	*sub2;

	sub1 = (unsigned char *)s1;
	sub2 = (unsigned char *)s2;
	i = 0;
	while ((sub1[i]) && (sub2[i]) && (sub1[i] == sub2[i]) && ((n - 1) > i))
	{
		i++;
	}
	if (n == 0)
		return (0);
	else
		return (sub1[i] - sub2[i]);
}

/*int    main()
{
    char    *s1;
    char    *s2;
    unsigned int n;

    n = 2;
    s1 = "hello";
    s2 = "hello ";
	printf("%d", ft_strncmp(s1, s2, n));
	printf("%d", strncmp(s1, s2, n));
}*/
