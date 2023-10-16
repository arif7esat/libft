/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agungor < agungor@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 08:28:38 by agungor           #+#    #+#             */
/*   Updated: 2023/10/17 01:02:07 by agungor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*my_substr;
	size_t	max_len;

	if (!s || start >= ft_strlen(s) || !len)
		return (ft_strdup(""));
	max_len = ft_strlen(s + start);
	if (len > max_len)
		len = max_len;
	my_substr = malloc(sizeof(char) * (len + 1));
	if (!my_substr)
		return (NULL);
	return (ft_strlcpy(my_substr, s + start, len + 1), my_substr);
}

/*
#include "libft.h"
#include "stdio.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	str_len;
	char	*result;

	i = 0;
	str_len = ft_strlen(s);
	if (s)
	{
		if (start >= len || !len || !str_len)
		{
			printf("b\n");
			return (ft_strdup(""));
			printf("c\n");
		}
		while (i < len && s[i + start] != 0)
		{
			printf("%zu",i);
			i++;
		}
		result = (char *)malloc(i + 1);
		if (!result)
			return (NULL);
		ft_strlcpy(result, &s[start], i + 1);
		return (result);
	}
	printf("a\n");
	return (NULL);
}
*/

/*
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*final;

	if (s)
	{
		if (start >= ft_strlen(s) || len == 0 || ft_strlen(s) == 0)
			return (ft_strdup(""));
		i = 0;
		while (i < len && s[i + start] != '\0')
			i++;
		final = (char *)malloc(i + 1);
		if (!final)
			return (NULL);
		j = 0;
		while (j < i)
		{
			final[j] = s[start + j];
			j++;
		}
		final[j] = '\0';
		return (final);
	}
	return (NULL);
}
*/

/*
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	str_len;

	str_len = ft_strlen(s);
	if (s)
	{
		if (start >= str_len || !len || !str_len)
			return (ft_strdup(""));
		else if (start + len > str_len)
			len = str_len - start;
		result = (char *)malloc(len + 1);
		if (!result)
			return (NULL);
		return (ft_strlcpy(result, &s[start], len + 1), result);
	}
	return (NULL);
}
*/