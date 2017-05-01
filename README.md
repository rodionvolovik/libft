# libft

C functions library

A set of the libc functions was re-coded, as defined in their man. Libft functions present the same prototype and behaviors as the originals. They are prefixed by “ft_”.

## Part I. Libc functions
* memset
* bzero
* memcpy
* memccpy
* memmove
* memchr
* memcmp
* strlen
* strdup
* strcpy
* strncpy
* strcat
* strncat
* strlcat
* strchr
* strrchr
* strstr
* strnstr
* strcmp
* strncmp
* atoi
* isalpha
* isdigit
* isalnum
* isascii
* isprint
* toupper
* tolower

## Part II. Additional functions

Name |ft_memalloc
-----|---------------------------------
Prototype | ```void * ft_memalloc(size_t size);```
Description | Allocates (with malloc(3)) and returns a “fresh” memory area. The memory allocated is initialized to 0. If the allocation fails, the function returns NULL.
Param. #1 | The size of the memory that needs to be allocated.
Return value | The allocated memory area

Name |ft_memdel
-----|---------------------------------
Prototype | ```void ft_memdel(void **ap);```
Description | Takes as a parameter the address of a memory area that needs to be freed with free(3), then puts the pointer to NULL.
Param. #1 | A pointer’s address that needs its memory freed and set to NULL.
Return value | None

Name |ft_strnew
-----|---------------------------------
Prototype | ```char * ft_strnew(size_t size);```
Description | Allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’. Each character of the string is initialized at ’\0’. If the allocation fails the function returns NULL.
Param. #1 | The size of the string to be allocated.
Return value | The string allocated and initialized to 0

Name |ft_strdel
-----|---------------------------------
Prototype | ```void ft_strdel(char **as);```
Description | Takes as a parameter the address of a string that need to be freed with free(3), then sets its pointer to NULL
Param. #1 | The string’s address that needs to be freed and its pointer set to NULL.
Return value | None

Name |ft_strclr
-----|---------------------------------
Prototype | ```void ft_strclr(char *s);```
Description | Sets every character of the string to the value ’\0’.
Param. #1 | The string that needs to be cleared.
Return value | None

Name |ft_striter
-----|---------------------------------
Prototype | ```void ft_striter(char *s, void (*f)(char *));```
Description | Applies the function f to each character of the string passed as argument. Each character is passed by address to f to be modified if necessary.
Param. #1 | The string to iterate.
Param. #2 | The function to apply to each character of s.
Return value | None
