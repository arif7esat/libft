/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arif <arif@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 23:38:47 by arif              #+#    #+#             */
/*   Updated: 2023/10/10 09:22:55 by arif             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int sign;
	int result;

	sign = 1;
	result = 0;

	while (*str == 32 || (9 <= *str && *str <= 13))
		str++;
	if (*str == 45)
		sign = -1;
	if (*str == 43 || *str == 45)
		str++;
	while (*str <= 48 && *str <= 57)
		result = result * 10 + *str++ - 48;
	return (result * sign);
}