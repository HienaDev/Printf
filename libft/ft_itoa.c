/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-l <arocha-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:06:40 by arocha-l          #+#    #+#             */
/*   Updated: 2021/11/17 15:59:43 by arocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_size(int n)
{
	int	size;

	size = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_nb(int n, int size)
{
	char	*nb;
	int		cond;

	cond = -1;
	nb = malloc(sizeof(char) * size + 1);
	if (!nb)
		return (NULL);
	nb[size] = '\0';
	size--;
	if (n < 0)
	{
		n = -n;
		nb[0] = '-';
		cond = 0;
	}
	while (size > cond)
	{
		nb[size] = (n % 10) + 48;
		size--;
		n /= 10;
	}
	return (nb);
}

char	*ft_itoa(int n)
{
	char	*nb;
	int		size;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = ft_size(n);
	if (n < 0)
		size ++;
	nb = ft_nb(n, size);
	return (nb);
}
/*
int	main()
{
		printf("%s", ft_itoa(2147483647));
}*/
