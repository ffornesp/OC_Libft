/*
	#include <ctype.h>
	int	isascii(int c);

	The isascii() function checks whether c is a 7-bit unsigned char value that fits
		into the ASCII character set. 

	RETURN VALUE:

	The isascii() function returns nonzero if the character c falls into the tested
		class, and a zero value if not.
*/

int	ft_isascii(int c) {
	if (c >= 0 && c <= 127)
		return 1;
	return 0;
}
