/*
	#include "libft.h"
	char *ft_strtrim(char const *s1, char const *set);

	The ft_strtrim() function allocates memory (using malloc(3)) and returns a
		copy of 's1' with characters from 'set' removed from the beggining and
		the end.

	RETURN VALUE:

	The trimmed string or NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set) {
	if (!s1 || *s1 == '\0')
		return ft_strdup("");
	if (!set || *set == '\0')
		return ft_strdup(s1);

	size_t	len = ft_strlen(s1);
	size_t	start = 0;
	while (ft_strchr(set, s1[start]) && s1[start])
		start++;
	if (start == len)
		return ft_strdup("");
	size_t	end = len - 1;
	while (ft_strchr(set, s1[end]) && end > start)
		end--;
	return ft_substr(s1, start, end - start + 1);
}
