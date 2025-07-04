/*
	#include <ctype.h>
	int	isdigit(int c);

	The isdigit() function checks for a digit (0 through 9).

	RETURN VALUE:

	The isdigit() function returns nonzero if the character c falls into the tested
		class, and a zero value if not.
*/

int	ft_isdigit(int c) {
	if (c >= '0' && c <= '9')
		return 1;
	return 0;
}
