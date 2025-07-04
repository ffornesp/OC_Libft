/*
	#include <ctype.h>
	int	isalnum(int c);

	The isalnum() function checks for an alphanumeric character; it is equivalent to 
		(isalpha(c) || isdigit(c)). 

	RETURN VALUE:

	The isalnum() function returns nonzero if the character c falls into the tested
		class, and a zero value if not.
*/

#include "libft.h"

int	ft_isalnum(int c) {
	if (ft_isalpha(c) || ft_isdigit(c))
		return 8;
	return 0;
}
