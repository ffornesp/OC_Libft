/*
	#include <strings.h>
	void bzero(void *s, size_t n);

	The bzero() function sets the first n bytes of the area starting at s to zero 
		(bytes containing aq\0aq).

	RETURN VALUES:

	The bzero() function doesn't return anything.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n) {
	unsigned char	*p = (unsigned char *)s;

	while (n--)
		*p++ = 0;
}
