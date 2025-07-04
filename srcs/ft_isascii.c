/*
	#include <ctype.h>
	int	isascii(int c);

	The isascii() function checks whether c is a 7-bit unsigned char value that fits
		into the ASCII character set. 

	RETURN VALUES:

	The isascii() function returns nonzero if the character c falls into the tested
		class, and a zero value if not.
*/

#ifndef _NULL
#define _NULL	0
#endif
#ifndef _DEL
#define _DEL	127
#endif

int	ft_isascii(int c) {
	if (c >= _NULL && c <= _DEL)
		return 1;
	return 0;
}
