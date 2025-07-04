/*
	#include <ctype.h>
	int	isspace(int c);

	The isspace() function checks for .white-space characters. In the "C" and 
		"POSIX" locales, these are: space, form-feed ('\f'), newline ('\n'), 
		carriage return ('\r'), horizontal tab ('\t'), and vertical tab ('\v'). 

	RETURN VALUE:

	The isspace() function returns nonzero if the character c falls into the tested
		class, and a zero value if not.
*/

int	ft_isspace(int c) {
	if (c == ' ' || (c >= '\t' && c <= '\r'))
		return 1;
	return 0;
}
