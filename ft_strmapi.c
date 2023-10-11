/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agungor < agungor@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 23:43:57 by arif              #+#    #+#             */
/*   Updated: 2023/10/11 08:49:50 by agungor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = -1;
	if (!(str = malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[++i])
		str[i] = f(i, s[i]);
	str[i] = '\0';
	return (str);
}
