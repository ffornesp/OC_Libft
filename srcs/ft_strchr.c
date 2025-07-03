/*
	#include <string.h>
	char *strchr(const char *s, int c);

	The strchr() function returns a pointer to the first occurrence of the character 
		c in the string s.

	Here "character" means "byte"; these functions do not work with wide or multibyte 
	characters. 

	RETURN VALUES:

	The strchr() and strrchr() functions return a pointer to the matched character or 
		NULL if the character is not found. The terminating null byte is considered 
		part of the string, so that if c is specified as aq\0aq, these functions return 
		a pointer to the terminator. 
*/

#include "libft.h"

char *strchr(const char *s, int c) {
	while (*s) {
		if (*s == (unsigned char)c)
			return (char *)s;
		s++;
	}
	if ((unsigned char)c == '\0')
		return (char *)s;
	return NULL;
}
