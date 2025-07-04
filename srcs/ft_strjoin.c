/*
	#include "libft.h"
	char *ft_strjoin(char const *s1, char const *s2);

	The ft_strjoin() function allocates memory (using malloc(3)) and returns a
		new string, which is the result of concatenating 's1' and 's2'.

	RETURN VALUE:

	The new string or NULL if the allocation fails.
*/

#include "libft.h"
#include <limits.h>

char	*ft_strjoin(char const *s1, char const *s2) {
	if (!s1 && !s2)
		return ft_strdup("");
	if (!s1)
		return ft_strdup(s2);
	if (!s2)
		return ft_strdup(s1);

	size_t	len_s1 = ft_strlen(s1);
	size_t	len_s2 = ft_strlen(s2);
	unsigned long long	total_len = (unsigned long long)len_s1 + (unsigned long long)len_s2;
	if (total_len > SIZE_MAX)
		return NULL;

	char	*str = ft_calloc(total_len + 1, sizeof(char));
	if (!str)
		return NULL;
	
	ft_strlcpy(str, s1, len_s1 + 1);
	ft_strlcat(str, s2, (size_t)total_len + 1);
	return str;
}
