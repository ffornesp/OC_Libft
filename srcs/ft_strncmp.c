/*
	#include <string.h>
	int strncmp(const char *s1, const char *s2, size_t n);

	The strncmp() compares the first (at most) n bytes of s1 and s2. It returns an 
		integer less than, equal to, or greater than zero if s1 is found, respectively, 
		to be less than, to match, or be greater than s2.

	RETURN VALUE:

	The strcmp() and strncmp() functions return an integer less than, equal to, or 
		greater than zero if s1 (or the first n bytes thereof) is found, respectively, 
		to be less than, to match, or be greater than s2. 
*/

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n) {
	size_t	i = 0;
	const unsigned char	*us1 = (const unsigned char *)s1;
	const unsigned char	*us2 = (const unsigned char *)s2;

	while (i < n && (us1[i] || us2[i])) {
		if (us1[i] != us2[i])
			return us1[i] - us2[i];
		i++;
	}
	return 0;
}
