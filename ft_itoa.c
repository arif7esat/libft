/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agungor < agungor@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 23:41:36 by arif              #+#    #+#             */
/*   Updated: 2023/10/15 22:12:31 by agungor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	number_length(int c)
{
	size_t	length;

	length = 1;
	if (c <= 0)
	{
		c *= -1;
		length++;
	}
	while (c && ++length)
		c /= 10;
	return (length);
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	len;
	long	number;

	number = n;
	len = number_length(n);
	result = (char *)malloc(len);
	if (!result)
		return (NULL);
	if (n < 0)
	{
		number *= -1;
		result[0] = '-';
	}
	else if (!n)
		result[0] = '0';
	result[--len] = '\0';
	while (number)
	{
		result[--len] = number % 10 + 48;
		number /= 10;
	}
	return (result);
}
