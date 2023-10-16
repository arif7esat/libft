/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agungor < agungor@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:24:16 by arif              #+#    #+#             */
/*   Updated: 2023/10/17 02:25:52 by agungor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	char	*strtrim;
	size_t	len;

	start = (char *)s1;
	end = (char *)s1 + ft_strlen(s1) - 1;
	while (*start && ft_strchr(set, *start))
		start++;
	while (end >= start && ft_strchr(set, *end))
		end--;
	len = end - start + 1;
	strtrim = (char *)malloc(len + 1);
	if (!strtrim)
		return (NULL);
	ft_strlcpy(strtrim, start, len + 1);
	return (strtrim);
}
