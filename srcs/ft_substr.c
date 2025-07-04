/*
	#include "libft.h"
	char *ft_substr(char const *s, unsigned int start, size_t len);

	The ft_substr() function allocates memory (using malloc(3)) and returns a
		substring from the string 's'. 
	
	The substring starts at index 'start' and has a maximum length of 'len'.

	RETURN VALUE:

	The substring or NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len) {
	if (!s)
		return NULL;

	size_t	slen = ft_strlen(s);
	if (start > slen)
		return ft_strdup("");

	size_t	size;
	if (slen - start >= len)
		size = len;
	else
		size = slen - start;

	char	*str = ft_calloc(size + 1);
	if (!str)
		return NULL;
	return ft_memcpy(str, s + start, size);
}
