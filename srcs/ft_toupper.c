/*
	#include <ctype.h>
	int toupper(int c);

	toupper() converts the letter c to upper case, if possible.
		If c is not an unsigned char value, or EOF, the behavior of these functions 
		is undefined. 
	
	RETURN VALUES:
	
	The value returned is that of the converted letter, or c if the conversion was 
		not possible.

*/

#include "libft.h"

int	ft_toupper(int c) {
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return c;
}
