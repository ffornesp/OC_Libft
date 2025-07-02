/*
	#include <ctype.h>
	int	isalpha(int c);

	The isalpha() function checks for an alphabetic character; in the standard "C" 
		locale, it is equivalent to (isupper(c) || islower(c)). In some locales, 
		there may be additional characters for which isalpha() is true-letters which
		are neither upper case nor lower case.

	The isalpha() function returns nonzero if the character c falls into the tested
		class, and a zero value if not.
*/

int	ft_isalpha(int c) {
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return 1024;
	return 0;
}
