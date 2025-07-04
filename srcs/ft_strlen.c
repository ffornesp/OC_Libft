/*
	#include <string.h>
	size_t strlen(const char *s);

	The strlen() function calculates the length of the string s, excluding the terminating 
	null byte (aq\0aq).

	RETURN VALUES:

	The strlen() function returns the number of bytes in the string s.
*/

#include "libft.h"

size_t ft_strlen(const char *s) {
	size_t	len = 0;

	while (s[len])
		len++;
	return len;
}
