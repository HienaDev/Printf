/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-l <arocha-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:28:18 by arocha-l          #+#    #+#             */
/*   Updated: 2022/02/02 13:36:38 by arocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_zero(int fd)
{
	write(fd, "0", 1);
	return (1);
}

static int	ft_max(int fd)
{
	write (fd, "-2147483648", 11);
	return (11);
}

int	ft_putnbr_fd(int n, int fd)
{
	char	numbers[10];
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (n == -2147483648)
		return (ft_max(fd));
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
		len++;
	}
	if (n == 0)
		return (ft_zero(fd));
	while (n > 0)
	{
		numbers[i++] = n % 10 + '0';
		n /= 10;
	}
	len += i;
	while (--i > -1)
		write(fd, &numbers[i], 1);
	return (len);
}
/*int	main()
{
	ft_putnbr_fd(123, 1);
}*/
