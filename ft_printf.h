/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-l <arocha-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:34:05 by arocha-l          #+#    #+#             */
/*   Updated: 2022/02/02 13:34:12 by arocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int	ft_check(char c, va_list args);
int	ft_putunsignednbr_fd(unsigned int n, int fd);
int	ft_putptr(void *ptr);
int	ft_hexa(unsigned int nb, int mod);
int	ft_printf(const char *print, ...);

#endif
