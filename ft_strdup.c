/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agungor < agungor@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 23:42:39 by arif              #+#    #+#             */
/*   Updated: 2023/10/11 12:08:47 by agungor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*copy;

	len = ft_strlen(s1) + 1;
	copy = (char *)malloc(sizeof(char) * len);
	if (!(copy))
		return ((char *)NULL);
	return ((char *)ft_strlcpy(copy, s1, len));
}