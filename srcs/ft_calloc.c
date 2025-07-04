/*
	#include <stdlib.h>
	void *calloc(size_t nmemb, size_t size);

	The calloc() function allocates memory for an array of nmemb elements of size 
		bytes each and returns a pointer to the allocated memory. The memory is 
		set to zero. If nmemb or size is 0, then calloc() returns either NULL, 
		or a unique pointer value that can later be successfully passed to free(). 

	RETURN VALUE:

	The malloc() and calloc() functions return a pointer to the allocated memory 
		that is suitably aligned for any kind of variable. On error, these functions 
		return NULL. NULL may also be returned by a successful call to malloc() with 
		a size of zero, or by a successful call to calloc() with nmemb or size equal 
		to zero.
*/

#include "libft.h"
#include <stdlib.h>
#include <limits.h>

void	*ft_calloc(size_t nmemb, size_t size) {
	if (nmemb == 0 || size == 0)
		return NULL;

	unsigned long long	total_size = (unsigned long long)nmemb * (unsigned long long)size; 
	if (total_size > SIZE_MAX)
		return NULL;

	void	*mem = malloc((size_t)total_size);
	if (!mem)
		return NULL;

	ft_bzero(mem, (size_t)total_size);
	return mem;
}
