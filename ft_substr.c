/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agungor < agungor@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:24:05 by arif              #+#    #+#             */
/*   Updated: 2023/10/11 09:16:58 by agungor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	max_len;

	if (!s || len >= ft_strlen(s) || len == 0)
		return (NULL);
	max_len = ft_strlen(s + start);
	if (len > max_len)
		len = max_len;
	substr = malloc(sizeof(char) * (len + 1));
	if (!(substr))
		return (NULL);
	return (ft_strlcpy(substr, s + start, len + 1), substr);
}