/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agungor < agungor@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 23:41:36 by arif              #+#    #+#             */
/*   Updated: 2023/10/12 00:01:42 by agungor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	number_length(int num)
{
	int	i;

	i = 1;
	if (!num)
		return (2);
	if (num < 0)
		i++;
	while (num != 0 && ++i)
		num /= 10;
	return (i);
}

char	*ft_itoa(int n)
{
	long	number;
	size_t	length;
	char	*str_num;

	number = n;
	length = number_length(n);
	if (n < 0)
		number *= -1;
	str_num = malloc(sizeof(char) * length);
	if (!(str_num))
		return (NULL);
	if (n < 0)
		str_num[0] = '-';
	if (n == 0)
		str_num[0] = '0';
	str_num[--length] = '\0';
	while (number > 0)
	{
		str_num[--length] = number % 10 + 48;
		number /= 10;
	}
	return (str_num);
}
