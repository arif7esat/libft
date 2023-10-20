/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agungor < agungor@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 01:11:09 by agungor           #+#    #+#             */
/*   Updated: 2023/10/21 02:54:52 by agungor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*str1;
	const unsigned char	*str2;

	str1 = (unsigned char *)dst;
	str2 = (const unsigned char *)src;
	if ((!str1 && !str2))
		return (dst);
	if (src > dst)
		ft_memcpy(dst, src, n);
	else if (dst > src)
		while (n--)
			*(str1 + n) = *(str2 + n);
	return (dst);
}
