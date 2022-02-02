/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:39:33 by arocha-l          #+#    #+#             */
/*   Updated: 2021/11/17 16:07:36 by arocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	set_check(char c, char *set)
{
	int	i;

	i = -1;
	while (set[++i])
		if (set[i] == c)
			return (0);
	return (1);
}

typedef struct s_stock
{
	int		size;
	int		i;
	char	*trimmed;
	int		j;
}	t_stock;

char	*ft_strtrim(char const *s1, char const *set)
{
	t_stock	s;

	s.i = 0;
	if (!s1)
		return (NULL);
	s.size = ft_strlen((char *)s1);
	while (set_check(s1[s.i], (char *)set) == 0)
		s.i++;
	if (!(s.i == s.size))
		while (set_check(s1[s.size - 1], (char *)set) == 0)
			s.size--;
	s.j = s.size - s.i;
	s.trimmed = malloc(sizeof(char) * (s.j + 1));
	if (!(s.trimmed))
		return (NULL);
	s.j = 0;
	while (s.i < s.size)
	{
		s.trimmed[s.j] = s1[s.i++];
		s.j++;
	}
	s.trimmed[s.j] = '\0';
	return (s.trimmed);
}
/*
int	main()
{
	char	*s1 = "   xxxx x xx";
//char	*s2 = "Hello \t  Please\n Trim me !";
char	*ret = ft_strtrim(s1, " x");
printf("%s", ret);
//printf("\n%s", s2);
}*/
