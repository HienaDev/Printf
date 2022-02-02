/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:02:39 by arocha-l          #+#    #+#             */
/*   Updated: 2021/11/19 13:00:03 by arocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*sub1;
	unsigned char	*sub2;

	sub1 = (unsigned char *)s1;
	sub2 = (unsigned char *)s2;
	while (n--)
	{
		if (*sub1 != *sub2)
			return (*sub1 - *sub2);
		sub1++;
		sub2++;
	}
	return (0);
}

/*int main()
{
    // Create a place to store our results 
    int result;

    // Create two arrays to hold our data 
    char example1[50];
    char example2[50];

    // Copy two strings into our data arrays
     (These can be any data and do not have to be strings) 
    strcpy(example1, "C memcmp zt TechOnTheNet.com");
    strcpy(example2, "C memcmp is a memory compare function");

    // Compare the two strings provided up to the first n characters 
    result = ft_memcmp(example1, example2, 23);
	printf("%i", result);
}*/
