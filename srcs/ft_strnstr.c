/*
	#include <string.h>
	char *strnstr(const char *big, const char *little, size_t len);

	The strnstr() function locates the first occurrence of the null-terminated string 
		little in the string big, where not more than len characters are searched. 
		Characters that appear after a `\0' character are not searched. Since the 
		strnstr() function is a FreeBSD specific API, it should only be used when 
		portability is not a concern.

	RETURN VALUE:

	If little is an empty string, big is returned; if little occurs nowhere in big, NULL
		is returned; otherwise a pointer to	the first character of the first occurrence 
		of little is returned.
*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len) {
	size_t	i = 0;
	size_t	j = 0;

	if (*little == '\0')
		return (char *)big;
	size_t	little_len = ft_strlen(little);
	
	while (i + little_len <= len && big[i]) {
		if (big[i] == little[0] && ft_strncmp(big + i, little, little_len))
			return (char *)(big + i);
		i++;
	}
	return NULL;
}
