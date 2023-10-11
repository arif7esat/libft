/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agungor < agungor@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:19:22 by agungor           #+#    #+#             */
/*   Updated: 2023/10/12 01:25:41 by agungor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return ((char *)s1);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2) + 1;
	strjoin = malloc(sizeof(char) * (len1 + len2));
	if (!(strjoin))
		return (NULL);
	ft_strlcat(strjoin, s1, len1 + 1);
	ft_strlcat(strjoin, s2, len1 + len2);
	return (strjoin);
}
