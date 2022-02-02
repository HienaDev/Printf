/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-l <arocha-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:09:52 by arocha-l          #+#    #+#             */
/*   Updated: 2022/02/01 15:53:17 by arocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_stock
{
	int		size1;
	int		size2;
	char	*join;
	int		i;
}	t_stock;

char	*ft_strjoin(char const *s1, char const *s2)
{
	t_stock	s;

	if (!s2 && !s1)
		return (NULL);
	s.size1 = ft_strlen((char *)s1);
	s.size2 = ft_strlen((char *)s2);
	s.join = malloc(sizeof(char) * (s.size1 + s.size2 + 1));
	if (s.join == NULL)
		return (NULL);
	s.i = -1;
	while (s.size1--)
	{
		s.i++;
		s.join[s.i] = s1[s.i];
	}
	s.size1 = 0;
	while (s.size2--)
	{
		s.i++;
		s.join[s.i] = s2[s.size1++];
	}
	s.join [++s.i] = '\0';
	return (s.join);
}
/*
int	main()
{
char	*s1 = "my favorite animal is";
char	*s2 = " ";
char	*s3 = "the nyancat";
char	*res = ft_strjoin(ft_strjoin(s1, s2), s3);
printf ("%s", res);
}*/
