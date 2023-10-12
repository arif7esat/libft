/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agungor < agungor@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 23:38:47 by arif              #+#    #+#             */
/*   Updated: 2023/10/12 10:06:10 by agungor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	sign = 1;
	result = 0;
	while (*str == 32 || (9 <= *str && *str <= 13))
		str++;
	if (*str == 45)
		sign = -1;
	if (*str == 45 || *str == 43)
		str++;
	while (*str)
		result = result * 10 + *str++ - 48;
	return (sign * result);
}
