/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:13:58 by arocha-l          #+#    #+#             */
/*   Updated: 2021/11/17 15:38:06 by arocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	skipc(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] == c)
	{
		i++;
	}
	return (i);
}

static int	special_strlen(char const *s, char c, int i)
{
	int	j;

	j = 0;
	while (s[i] != 0 && s[i] != c)
	{
		j++;
		i++;
	}
	return (j);
}

int	npalavras(char const *s, char c)
{
	int	i;
	int	j;

	j = 0;
	i = skipc(s, c);
	while (s[i] != 0)
	{
		while (s[i] != c && s[i] != 0)
		{
			i++;
		}
		while (s[i] == c && s[i] != 0)
		{
			i++;
		}
		j++;
	}
	return (j);
}

void	auxiliar(char const *s, char ***str, char c, int i)
{
	int	k;
	int	j;

	(*str) = (char **)malloc(sizeof(char *) * (npalavras(s, c) + 1));
	if ((*str) == NULL )
		return ;
	j = 0;
	while (s[i] != '\0')
	{
		k = 0;
		(*str)[j] = (char *)malloc((special_strlen(s, c, i) + 1)
				* sizeof(char));
		if ((*str)[j] == NULL)
			return ;
		while (s[i] != c && s[i] != '\0')
			(*str)[j][k++] = s[i++];
		(*str)[j++][k] = '\0';
		while (s[i] == c && s[i] != '\0')
			i++;
	}
	(*str)[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**str;

	if (!s)
		return (NULL);
	i = skipc(s, c);
	auxiliar(s, &str, c, i);
	return (str);
}

/*
int	main()
{
	int	i;
	int	j;
	char	**str = ft_split("  tripouille  42  ", ' ');
	j = -1;
	i = -1;
	while (str[++i])
		printf("i: %i,%s\n", i, str[i]);
	printf("i: %i,%s\n", i, str[i]);

	free(str[2]);
	free(str[1]);
	free(str[0]);
	free(str);
}*/
