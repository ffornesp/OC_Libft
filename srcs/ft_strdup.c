/*
	#include <string.h>
	char *strdup(const char *s);

	The strdup() function returns a pointer to a new string which is a duplicate of 
		the string s. Memory for the new string is obtained with malloc(3), and can
		be freed with free(3). 

	RETURN VALUE:

	The strdup() function returns a pointer to the duplicated string, or NULL if 
		insufficient memory was available. 
*/

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s) {
	size_t	len = ft_strlen(s);
	char	*out = malloc(sizeof(char) * (len + 1));

	if (!out)
		return NULL;

	for (size_t i = 0; i <= len; i++)
		out[i] = s[i];

	return out;
}
