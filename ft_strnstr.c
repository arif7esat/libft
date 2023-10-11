#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_needle;

	len_needle = ft_strlen(needle);
	if (!len_needle)
		return ((char *)haystack);
	while (len >= len_needle)
	{
		len--;
		if (!(ft_memcmp(haystack, needle, len_needle)))
			return ((char *)haystack);
		haystack++;
	}
	return ((char *)NULL);
}
