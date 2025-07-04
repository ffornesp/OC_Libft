/*
	#include <stdlib.h>
	int atoi(const char *nptr);

	The atoi() function converts the initial portion of the string pointed to by 
		nptr to int. The behavior is the same as strtol(nptr, NULL, 10); except 
		that atoi() does not detect errors. 

	RETURN VALUE:

	The converted value.
*/

#include "libft.h"
#include <stdbool.h>

static bool	ft_isspace(const char c) {
	if (c == ' ' || (c >= 9 && c <= 13))
		return true;
	return false;
}

int	ft_atoi(const char *nptr) {
	bool	negative = false;
	int		res = 0;
	size_t	i = 0;

	while (*nptr && ft_isspace(*nptr))
		nptr++;

	if (*nptr == '-' || *nptr == '+')
		negative = (*nptr++ == '-');

	while (*nptr) {
		if (!ft_isdigit(*nptr))
			break ;
		res = res * 10 + *nptr++ - '0';
		if (i++ >= 20)
			return -1 + negative;
	}
	if (negative == true)
		res *= -1;

	return res;
}
