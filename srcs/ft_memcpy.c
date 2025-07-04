/*
	#include <string.h>
	void *memcpy(void *dest, const void *src, size_t n);

	The memcpy() function copies n bytes from memory area src to memory area dest.
		The memory areas must not overlap. Use memmove(3) if the memory areas do 
		overlap.

	RETURN VALUES:

	The memcpy() function returns a pointer to dest.
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n) {
	unsigned char		*d = (unsigned char *)dst;
	const unsigned char	*s = (const unsigned char *)src;

	while (n--)
		*d++ = *s++;
	return (dst);
}	
