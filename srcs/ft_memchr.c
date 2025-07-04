/*
	#include <string.h>
	void *memchr(const void *s, int c, size_t n);

	The memchr() function scans the initial n bytes of the memory area pointed to by s 
		for the first instance of c. Both c and the bytes of the memory area pointed to 
		by s are interpreted as unsigned char. 

	RETURN VALUES:

	The memchr() and memrchr() functions return a pointer to the matching byte or NULL 
		if the character does not occur in the given memory area. 
*/

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n) {
	const unsigned char	*us = (const unsigned char *)s;
	const unsigned char	uc = (const unsigned char)c;

	while (n--) {
		if (*us == uc)
			return str;
		us++;
	}
	return NULL;
}
