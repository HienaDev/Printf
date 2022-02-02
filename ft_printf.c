/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-l <arocha-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 12:06:42 by arocha-l          #+#    #+#             */
/*   Updated: 2022/02/02 15:59:46 by arocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include "libft/libft.h"

int	ft_hexa(unsigned long nb, int mod)
{
	char	*hex;
	int		position;
	char	*hexnb;
	int		i;

	hexnb = malloc(sizeof(char) * 8);
	if (mod == 1)
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	i = 0;
	while (nb > 15)
	{
		position = nb % 16;
		hexnb[i] = hex[position];
		i++;
		nb = nb / 16;
	}
	position = nb % 16;
	hexnb[i] = hex[position];
	position = i + 1;
	while (i > -1)
		write(1, &hexnb[i--], 1);
	free(hexnb);
	return (position);
}

int	ft_putptr(void *ptr)
{
	unsigned long	nb;
	int 			len;
	nb = (unsigned long)ptr;
	write(1, "0x", 2);
	len = ft_hexa(nb, 1);
	return (len + 2);
}

int	ft_putunsignednbr_fd(unsigned int n, int fd)
{
	char	numbers[10];
	int		i;
	int		len;
	
	i = 0;
	if (n == 0)
	{
		write(fd, "0", 1);
		return (1);
	}
	while (n > 0)
	{
		numbers[i] = n % 10 + '0';
		n /= 10;
		i++;
	}
	len = i;
	while (--i > -1)
		write(fd, &numbers[i], 1);
	return (len);
}

int	ft_check(char c, va_list args)
{
	int	len;

	len = 0;
	if (c == 's')
	{
		len += ft_putstr_fd(va_arg(args, char *), 1);
	}
	else if (c == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
		len += 1;
	}
	else if (c == 'd')
		len += ft_putnbr_fd(va_arg(args, int), 1);
	else if (c == 'p')
		len += ft_putptr(va_arg(args, void *));
	else if (c == 'i')
		len += ft_putnbr_fd(va_arg(args, int), 1);
	else if (c == 'u')
		len += ft_putunsignednbr_fd(va_arg(args, unsigned int), 1);
	else if (c == 'x')
		len += ft_hexa(va_arg(args, unsigned int), 1);
	else if (c == 'X')
		len += ft_hexa(va_arg(args, unsigned int), 2);
	else if (c == '%')
	{
		write (1, "%", 1);
		len += 1;
	}
	return (len);
}

int	ft_printf(const char *print, ...)
{
	va_list	args;
	int		i;
	int		len;

	va_start(args, print);
	i = -1;
	len = 0;
	while (print[++i] != '\0')
	{
		if (print[i] == '%')
		{
			i++;
			len += ft_check(print[i], args);
		}
		else
		{
			write(1, &print[i], 1);
			len++;
		}
	}
	return (len);
}
/*
int	main()
{
	//char	string1 = -623;
	//int	string2 = -981;
	//int	batman = -123;
	
	ft_printf("TEST = Print 2 strings: %u\n", LONG_MAX);
	printf("TEST = Print 2 strings: %u\n", LONG_MAX);
}
*/
/*
int	main(void)
{
	int	i;
	char a = 'a';
	char b = 'b';
	int c = 1234;
	int j = 9876;
	int k = 255;
	char str1[] = "hello";
	char str2[] = "there";
	printf ("\tOUR TESTS\n");
	i = ft_printf("Print a char: %c\n", a);
	printf("%d\n", i);
	i = ft_printf("Print many chars: %c, %c\n", a, b);
	printf("%d\n", i);
	i = ft_printf("Print a str: %s\n", str1);
	printf("%d\n", i);
	i = ft_printf("Print many str: %s, %s\n", str1, str2);
	printf("%d\n", i);
	i = ft_printf("Print a number (d): %d\n", c);
	printf("%d\n", i);
	i = ft_printf("Print a number (i) : %i\n", c);
	printf("%d\n", i);
	i = ft_printf("Print many numbers: %d, %i\n", c, j);
	printf("%d\n", i);
	i = ft_printf("Print a pointer: %p\n", str1);
	printf("%d\n", i);
	i = ft_printf("Print many pointers: %p, %p\n", str1, str2);
	printf("%d\n", i);
	i = ft_printf("Print a hex lower: %x\n", k);
	printf("%d\n", i);
	i = ft_printf("Print a hex upper: %X\n", k);
	printf("%d\n", i);
	i = ft_printf("Print an unsigned number: %u\n", c);
	printf("%d\n", i);
	i = ft_printf("Print many unsigned numbers: %u, %u\n", c, j);
	printf("%d\n", i);
	printf ("\tOFFICIAL TESTS\n");
	i = printf("Print a char: %c\n", a);
	printf("%d\n", i);
	i = printf("Print many chars: %c, %c\n", a, b);
	printf("%d\n", i);
	i = printf("Print a str: %s\n", str1);
	printf("%d\n", i);
	i = printf("Print many str: %s, %s\n", str1, str2);
	printf("%d\n", i);
	i = printf("Print a number (d): %d\n", c);
	printf("%d\n", i);
	i = printf("Print a number (i) : %i\n", c);
	printf("%d\n", i);
	i = printf("Print many numbers: %d, %i\n", c, j);
	printf("%d\n", i);
	i = printf("Print a pointer: %p\n", str1);
	printf("%d\n", i);
	i = printf("Print many pointers: %p, %p\n", str1, str2);
	printf("%d\n", i);
	i = printf("Print a hex lower: %x\n", k);
	printf("%d\n", i);
	i = printf("Print a hex upper: %X\n", k);
	printf("%d\n", i);
	i = printf("Print an unsigned number: %u\n", c);
	printf("%d\n", i);
	i = printf("Print many unsigned numbers: %u, %u\n", c, j);
	printf("%d\n", i);
}
*/
