/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agungor < agungor@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:24:16 by arif              #+#    #+#             */
/*   Updated: 2023/10/13 01:47:39 by agungor          ###   ########.fr       */
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

	// Girdi parametrelerini doğrula
	if (!s1 || !set)
	{
		return (NULL);
	}
	// Başta ve sondaki set içindeki karakterleri geçerken start ve end'i güncelle
	start = (char *)s1;
	end = (char *)s1 + ft_strlen(s1) - 1;
	// Başta ve sondaki boşluk karakterlerini atlama
	while (*start && ft_strchr(set, *start))
		start++;
	while (end >= start && ft_strchr(set, *end))
		end--;
	printf("Start: %s\n", start);
	printf("End: %s\n", end);
	// Kırpılmış string'in uzunluğunu hesapla
	len = end - start + 1;
	// Bellek tahsisi yap
	strtrim = (char *)malloc(len + 1);
	if (!strtrim)
	{
		return (NULL);
	}
	// Kırpılmış string'i oluştur
	ft_strlcpy(strtrim, start, len + 1);
	printf("strtrim: %s\n", strtrim);
	return (strtrim);
}
