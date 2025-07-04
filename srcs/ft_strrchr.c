/*
	#include <string.h>
	char *strrchr(const char *s, int c);

	The strrchr() function returns a pointer to the last occurrence of the character 
		c in the string s. 

	Here "character" means "byte"; these functions do not work with wide or multibyte 
	characters. 

	RETURN VALUE:

	The strchr() and strrchr() functions return a pointer to the matched character or 
		NULL if the character is not found. The terminating null byte is considered 
		part of the string, so that if c is specified as aq\0aq, these functions return 
		a pointer to the terminator. 
*/

char *ft_strrchr(const char *s, int c) {
	const char	*lst = NULL;

	while (*s) {
		if (*s == (unsigned char)c)
			lst = s;
		s++;
	}
	if ((unsigned char)c == '\0')
		return (char *)s;

	return (char *)lst;
}
