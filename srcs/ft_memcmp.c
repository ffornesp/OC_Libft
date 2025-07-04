/*
	#include <string.h>
	int memcmp(const void *s1, const void *s2, size_t n);

	The memcmp() function compares the first n bytes (each interpreted as unsigned char) 
		of the memory areas s1 and s2. 

	RETURN VALUE:

	The memcmp() function returns an integer less than, equal to, or greater than zero if 
		the first n bytes of s1 is found, respectively, to be less than, to match, or be 
		greater than the first n bytes of s2.

	For a nonzero return value, the sign is determined by the sign of the difference 
		between the first pair of bytes (interpreted as unsigned char) that differ in s1 
		and s2. 
*/

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n) {
	const unsigned char *us1 = (const unsigned char *)s1;
	const unsigned char *us2 = (const unsigned char *)s2;
	
	while (n--) {
		if (*us1 != *us2)
			return (int)(*us1 - *us2);
		us1++;
		us2++;
	}
	return 0;
}
