/*
	#include <ctype.h>
	int tolower(int c);

	tolower() converts the letter c to lower case, if possible.
		If c is not an unsigned char value, or EOF, the behavior of these functions 
		is undefined. 
	
	RETURN VALUES:
	
	The value returned is that of the converted letter, or c if the conversion was 
		not possible.

*/

#include "libft.h"

int	ft_tolower(int c) {
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return c;
}
