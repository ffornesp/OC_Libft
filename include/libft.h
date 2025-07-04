#ifndef LIBFT_H
#define LIBFT_H

/*
	The <stddef.h> header defines the following:

	NULL
	    Null pointer constant. 
	
	offsetof(type, member-designator)
	    Integral constant expression of type size_t, the value of which is 
			the offset in bytes to the structure member (member-designator), 
			from the beginning of its structure (type). 

	The <stddef.h> header defines through typedef:

	ptrdiff_t
		Signed integral type of the result of subtracting two pointers. 

	wchar_t
		Integral type whose range of values can represent distinct wide-character
		codes for all members of the largest character set specified among the 
		locales supported by the compilation environment: the null character has 
		the code value 0 and each member of the Portable Character Set has a code 
		value equal to its value when used as the lone character in an integer 
		character constant. 

	size_t
		Unsigned integral type of the result of the sizeof operator. 
*/
#include <stddef.h>

	/*		LIBC functions		*/

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isspace(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size); 
size_t	ft_strlcat(char *dst, const char *src, size_t size); 
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_atoi(const char *nptr);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *s);

	/*		OTHER functions		*/

char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
