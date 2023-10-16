/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agungor < agungor@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:43:27 by agungor           #+#    #+#             */
/*   Updated: 2023/10/16 23:36:02 by agungor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strtoupper(unsigned int index, char *c)
{
	(void)index;
	*c = ft_toupper(*c);
}

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = -1;
	while (s[++i])
		f(i, &s[i]);
}
