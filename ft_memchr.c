/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agungor <agungor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:05:28 by agungor           #+#    #+#             */
/*   Updated: 2023/10/22 03:49:03 by agungor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/_types/_size_t.h>

void	*ft_memchr(void const *s, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		if (((char *)s)[i] == (char)c)
			return ((void *)&s[i]);
	return ((void *)0);
}
