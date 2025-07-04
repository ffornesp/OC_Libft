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

	size_t	total_len;
	if (slen - start >= len)
		total_len = len;
	else
		total_len = slen - start;

	char	*str = ft_calloc(total_len + 1, sizeof(char));
	if (!str)
		return NULL;
	return ft_memcpy(str, s + start, total_len);
}
