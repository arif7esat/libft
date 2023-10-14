/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agungor < agungor@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 23:42:39 by arif              #+#    #+#             */
/*   Updated: 2023/10/14 12:09:36 by agungor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*my_strdup;

	len = ft_strlen(s1) + 1;
	my_strdup = malloc(sizeof(char) * len);
	if (!my_strdup)
		return (NULL);
	return ((char *)ft_strlcpy(my_strdup, s1, len));
}
