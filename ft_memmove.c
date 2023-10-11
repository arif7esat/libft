/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agungor < agungor@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 01:11:09 by agungor           #+#    #+#             */
/*   Updated: 2023/10/12 01:23:05 by agungor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (!dst || !src)
		return (NULL);
	if (src > dst)
		ft_memcpy(dst, src, n);
	else if (dst > src)
		while (n--)
			*((unsigned char *)(dst + n)) = *((unsigned char *)(src + n));
	return (dst);
}
