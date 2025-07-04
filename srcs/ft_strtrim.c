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
#include <stdbool.h>

static bool	is_in_set(char c, const char *set) {
	for (size_t i = 0; set[i]; i++) {
		if (c == set[i])
			return true;
	}
	return false;
}

static size_t	find_index(const char *s1, char const *set, int direction, size_t n) {
	int	i = n;

	if (direction == 1) {
		for (; s1[i]; i += direction)
			if (!is_in_set(s1[i], set))
				return (size_t)i;
	} else {
		for (; i >= 0; i += direction)
			if (!is_in_set(s1[i], set))
				return (size_t)i;
	}
	return (size_t)i;
}

char	*ft_strtrim(char const *s1, char const *set) {
	if (!s1 || *s1 == '\0')
		return ft_strdup("");
	if (!set || *set == '\0')
		return ft_strdup(s1);

	size_t	start = find_index(s1, set, 1, 0);
	if (start == ft_strlen(s1))
		return ft_strdup("");
	size_t	end = find_index(s1, set, -1, ft_strlen(s1) - 1);

	size_t	len = end - start + 1;
	char	*str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return NULL;
	return (char *)ft_memcpy(str, s1 + start, len);
}
