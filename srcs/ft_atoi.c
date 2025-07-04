/*
	#include <stdlib.h>
	int atoi(const char *nptr);

	The atoi() function converts the initial portion of the string pointed to by 
		nptr to int. The behavior is the same as strtol(nptr, NULL, 10); except 
		that atoi() does not detect errors. 

	RETURN VALUES:

	The converted value.
*/

#include "libft.h"
#include <stdbool.h>

static int	ft_pow(int n, size_t times) {
	int	res = n;

	if (times < 1)
		return 1;

	while (times-- > 1)
		res *= n;

	return res;
}

static size_t	count_digits(const char *str) {
	size_t	len = 0;

	while (str[len] && ft_isdigit(str[len]))
		len++;
	return len;
}

int	ft_atoi(const char *nptr) {
	bool	negative = false;

	if (!ft_isdigit(*nptr)) {
		if (*nptr == '-')
			negative = true;
		else if (*nptr != '+')
			return 0;
		nptr++;
	}

	size_t	len = count_digits(nptr);
	int		res = 0;
	size_t	i = 0;

	while (len) {
		if (!ft_isdigit(nptr[i]))
			break ;
		res += ((int)nptr[i++] - '0') * ft_pow(10, --len);
		if (i >= 20)
			return -1;
	}

	if (negative == true)
		res *= -1;

	return res;
}
