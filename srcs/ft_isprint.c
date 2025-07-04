/*
	#include <ctype.h>
	int	isprint(int c);

	The isprint() function checks for any printable character including space.

	RETURN VALUES:

	The isprint() function returns nonzero if the character c falls into the tested
		class, and a zero value if not.
*/

int	ft_isprint(int c) {
	if (c >= ' ' && c <= '~')
		return 16384;
	return 0;
}
