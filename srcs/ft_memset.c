/*
	#include <string.h>
	void *memset(void *s, int c, size_t n);

	The memset() function fills the first n bytes of the memory area pointed to by s 
		with the constant byte c. 

	RETURN VALUES:

	The memset() function returns a pointer to the memory area s. 
*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n) {
	unsigned char	*p = (unsigned char *)s;

	while (n--)
		*p++ = (unsigned char)c;
	return (s);
}
