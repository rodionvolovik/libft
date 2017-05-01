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
