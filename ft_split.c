/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agungor < agungor@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 00:49:07 by agungor           #+#    #+#             */
/*   Updated: 2023/10/13 01:39:16 by agungor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count_length(const char *s, char c, int in_length)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
			continue ;
		}
		count++;
		while (s[i] && s[i] != c)
		{
			i++;
		}
		if (in_length)
			return (i);
	}
	return (count);
}

char	**ft_split(const char *s, char c)
{
	size_t	word_count;
	size_t	i;
	int		j;
	char	**result_string;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	word_count = word_count_length(s, c, 0);
	result_string = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result_string)
		return (NULL);
	while (i < word_count)
	{
		while (s[j] && s[j] == c)
			j++;
		result_string[i] = ft_substr(s, j, word_count_length(&s[j], c, 1));
		if (!result_string[i])
			return (NULL);
		j += word_count_length(&s[j], c, 1);
		i++;
	}
	return (result_string[i] = NULL, result_string);
}
