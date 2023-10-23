/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agungor <agungor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 23:42:11 by arif              #+#    #+#             */
/*   Updated: 2023/10/21 21:40:47 by agungor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*str1;
	const unsigned char	*str2;

	str1 = (unsigned char *)dst;
	str2 = (const unsigned char *)src;
	if (!str1 && !str2)
		return (0);
	if (dst < src)
		ft_memcpy(dst, src, n);
	else if (dst > src)
		while (n--)
			*((str1 + n)) = *((str2 + n));
	return (dst);
}
