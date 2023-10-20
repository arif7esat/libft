/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agungor < agungor@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 23:43:57 by arif              #+#    #+#             */
/*   Updated: 2023/10/19 14:23:57 by agungor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	mapi_toupper(unsigned int i, char c)
{
	(void)i;
	return (ft_tolower(c));
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = -1;
	str = malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[++i])
		str[i] = f(i, s[i]);
	str[i] = '\0';
	return (str);
}

/*int	main(void)
{
	char	*text_result;

	char text[] = "ARIF ESAT GUNGOR";
	text_result = (char *)malloc(ft_strlen(text) + 1);
	ft_strmapi(text, mapi_toupper);
	printf("%s", text);
	free(text_result);
}
*/