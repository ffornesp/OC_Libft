/*
	#include <string.h>
	void *memmove(void *dest, const void *src, size_t n);

	The memmove() function copies n bytes from memory area src to memory area dest.
		The memory areas may overlap: copying takes place as though the bytes in src
		are	first copied into a temporary array that does not overlap src or dest, and
		the bytes are then copied from the temporary array to dest.

	RETURN VALUE:

	The memmove() function returns a pointer to dest.
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n) {
	unsigned char		*d = (unsigned char *)dst;
	const unsigned char	*s = (const unsigned char *)src;

	if (s < d) {
		d += n;
		s += n;
		while (n--)
			*d-- = *s--;

		return dst;
	}
	return ft_memcpy(d, s, n);
}	
