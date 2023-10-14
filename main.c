/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agungor < agungor@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 01:57:35 by agungor           #+#    #+#             */
/*   Updated: 2023/10/13 01:58:01 by agungor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	test_strmapi(unsigned int i, char c)
{
	i = 1;
	return (c - 32);
}

int	main(void)
{
	int		result;
	int		value;
	char	destination1[3];
	int		i;
	int		c;
	size_t	n;
	size_t	n1;
	char	*name;
	char	*comma;
	char	*attempt;
	char	*attempt_memchr;
	char	*after_domain;
	int		mem_result;
	char	*haystcak_result1;
	char	*haystcak_result2;
	char	*result_substr;
	char	*strjoin_result;
	char	*strtrim_result;
	char	b;
	char	**k;
	char	*itoa_result;
	char	*ft_strmapi_result;

	char textOne[] = "42 Ailesine Hosgeldin";
	ft_bzero(textOne, sizeof(textOne));
	if (*textOne == '\0')
		printf("textOne temizlendi kardeş\n");
	printf("\n");
	value = 42;
	result = ft_isalnum(value);
	printf("ft_isalnum result = %d\n", result);
	printf("\n");
	result = ft_isascii(value);
	printf("ft_isascii result = %d\n", result);
	printf("\n");
	result = ft_isdigit(value);
	printf("ft_isdigit result = %d\n", result);
	printf("\n");
	value = 'K';
	result = ft_isalpha(value);
	printf("ft_isalpha result = %d\n", result);
	printf("\n");
	value = 'a';
	result = ft_toupper(value);
	printf("ft_toupper result = %d\n", result);
	printf("\n");
	result = ft_isprint(value);
	printf("ft_isprint result = %d\n", result);
	printf("\n");
	result = ft_tolower(value);
	printf("ft_tolower result = %d\n", result);
	printf("\n");
	char name1[100] = "arif esat";
	char name2[] = "islamın neferi olmak nasip olucak inşallah";
	// bu kadar uzun olmasına rağmen abort hatası almadım cünkü dst için ayrılan alan srcden büyük ya da eşit
	ft_memcpy(name1, name2, sizeof(name2));
	printf("ft_memcpy result = %s\n", name1);
	printf("\n");
	//	DST <= SRC
	char source1[5] = {10, 127, 3, 4, 5};
	i = 0;
	ft_memmove(destination1, source1, sizeof(source1));
	printf("ft_memmove result1\n");
	while (i < 3)
		printf("%d\n", destination1[i++]);
	printf("\n");
	//	DST > SRC
	int source2[5] = {-1, -2, -3, -128, 5};
	int destination2[10] = {0};
	i = 0;
	ft_memmove(destination2, source2, sizeof(source2));
	printf("ft_memmove result2\n");
	while (i < 10)
		printf("%d\n", destination2[i++]);
	printf("\n\n");
	char text[] = "arif esat güngör";
	c = 1000;
	ft_memset(text, c, 0);
	printf("ft_memset result = %s\n", text);
	printf("\n");
	char nameOne[20] = "arif esat";
	//	char	name2[20] = "arif esat";
	char name3[] = " güngör";
	//  char	name4[] = "güngör";
	ft_strlcat(nameOne, name3, sizeof(nameOne));
	//	my_strlcat(name2, name4, sizeof(name2));
	printf("ft_strlcat result = %s\n", nameOne);
	//	printf("%s",name2);
	printf("\n");
	char text1[] = "libft projesi nasıl gidiyor?";
	result = ft_strlen(text1);
	printf("ft_strlen result = %d\n", result);
	printf("\n");
	const char s1[] = "arif";
	const char s2[] = "arif";
	n = 32;
	result = ft_strncmp(s1, s2, n);
	printf("ft_strncmp result = %d\n", result);
	printf("\n");
	char dest[] = "arif esat güngör";
	const char src[] = "yusuf dursun";
	n1 = 12;
	result = ft_strlcpy(dest, src, n1);
	printf("ft_strlcpy result = %d\n", result);
	printf("Like the final version of destination after ft_strlcpy  = %s\n",
		dest);
	printf("\n");
	const char strchr[] = "arif esat Yusuf";
	name = ft_strchr(strchr, 'Y');
	printf("ft_strchr result = %s\n", name);
	if (strchr + 10 == name)
		printf("fonksiyon doğru çalıştı");
	printf("strchr + 10 -> %p\n", strchr + 10);
	printf("ft_strchr kullanıp  Y bulunca -> %p\n", name);
	printf("\n");
	const char strrchr[] = "arif,esat,Gungor";
	comma = ft_strrchr(strrchr, ',');
	printf("%s\n", comma);
	attempt = ft_strrchr(strrchr, '@');
	if (attempt == NULL)
		printf("Could not find @\n");
	printf("\n");
	char for_memchr_name[] = "güzel misin ? melike";
	attempt_memchr = ft_memchr(for_memchr_name, '?', 20);
	printf("%s\n", attempt_memchr);
	char willSmitEmail[] = "willSmith_55@icloud.com";
	after_domain = ft_memchr(willSmitEmail, '@', ft_strlen(willSmitEmail));
	printf("%s\n", after_domain);
	printf("\n");
	char for_memcmp_text1[] = "arif esat güngör";
	char for_memcmp_text2[] = "arif güngör";
	mem_result = ft_memcmp(for_memcmp_text1, for_memcmp_text2,
			sizeof(for_memcmp_text2));
	printf("attempt_texts result = %d\n", mem_result);
	printf("\n");
	const char haystack[] = "nereye olm... noluyor lan demeye başladık";
	const char needle[] = "noluyor";
	const char haystack2[] = "nereye olm... noluyor lan demeye başladık";
	const char needle2[] = "noluyor";
	haystcak_result1 = ft_strnstr(haystack, needle, 21);
	haystcak_result2 = strnstr(haystack2, needle2, 21);
	printf("for haystcak result = %s\n", haystcak_result1);
	printf("for haystcak result = %s\n", haystcak_result2);
	char test_ft_atoi[] = "arfi esat *--12324";
	printf("atoi result = %d\n", atoi(test_ft_atoi));
	printf("ft_atoi result = %d\n", ft_atoi(test_ft_atoi));
	printf("\n");
	// calloc
	// strdup
	char text_substr[] = "icardiGalatasaray";
	result_substr = ft_substr(text_substr, 6, 9);
	printf("result substr = %s\n", result_substr);
	char delirdim[] = "icardi";
	printf("%zu ", ft_strlen(text_substr));
	printf("%lu ", strlen("Galatasaray"));
	printf("%lu ", strlen(result_substr));
	printf("\n");
	char strjoin_text1[] = "hızlı ve öfkeli 11-";
	char strjoin_text2[] = "hızlı ve öfkeli 12";
	strjoin_result = ft_strjoin(strjoin_text1, strjoin_text2);
	printf("strjoin_result = %s\n", strjoin_result);
	printf("\n");
	char const s1_text[] = "  apple  ";
	char const set_text[] = " ";
	strtrim_result = ft_strtrim(s1_text, set_text);
	printf("strtrim result = %s", strtrim_result);
	printf("\n");
	char a[] = ", ,,, arif-esat-güngör-i-----i---i--";
	b = '-';
	k = ft_split(a, b);
	if (k)
	{
		for (size_t i = 0; k[i]; i++)
		{
			printf("%zu. split word = %s\n", i + 1, k[i]);
			free(k[i]);
		}
		free(k);
	}
	printf("\n");
	itoa_result = ft_itoa(-12345);
	printf("%s\n", itoa_result);
	itoa_result = ft_itoa(12);
	printf("%s\n", itoa_result);
	itoa_result = ft_itoa(0);
	printf("%s\n", itoa_result);
	printf("\n");
	ft_strmapi_result = ft_strmapi("arif esat", test_strmapi);
	printf("%s", ft_strmapi_result);
}
