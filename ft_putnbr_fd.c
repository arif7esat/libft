/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agungor < agungor@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 01:08:08 by agungor           #+#    #+#             */
/*   Updated: 2023/10/18 01:24:42 by agungor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar_fd(45, fd);
		nbr *= -1;
	}
	if (nbr > 9)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd(nbr % 10 + 48, fd);
}
