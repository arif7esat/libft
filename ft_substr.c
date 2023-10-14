/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agungor < agungor@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 08:28:38 by agungor           #+#    #+#             */
/*   Updated: 2023/10/13 21:49:02 by agungor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*my_substr;
	size_t	max_len;

	if (!s && len >= ft_strlen(s) && len == 0)
		return (NULL);
	max_len = ft_strlen(s + start);
	if (len > max_len)
		len = max_len;
	my_substr = malloc(sizeof(char) * (len + 1));
	if (!(my_substr))
		return (NULL);
	return (ft_strlcpy(my_substr, s + start, len + 1), my_substr);
}
