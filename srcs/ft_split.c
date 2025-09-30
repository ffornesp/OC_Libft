/*
	#include "libft.h"
	char	**ft_split(char const *s, char c);

	The ft_split() function allocates memory (using malloc(3)) and returns an
		array of strings obtained by splitting 's' using the character 'c' as
		a delimiter. The array must end with a NULL pointer.

	RETURN VALUE:

	The array of new strings resulting from the split. NULL if the allocation
		fails.
*/

#include "libft.h"

size_t	calculate_size(char const *s, const char c) {
	while (*s == c)
		s++;
	
}

char	**ft_split(char const *s, char c) {
	if (!s)
		return NULL;

	size_t	size = 1;

	if (c) {


	char	**out = ft_calloc(sizeof(char *) * (size + 1));
	if (!out)
		return NULL;
	
	if (!c)
		*out = s;

	return out;
}
