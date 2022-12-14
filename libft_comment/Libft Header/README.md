# Libft header

### Código do header:
```h
#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

/* ************************************************************************** */
/*                          Part 1 - Libc functions                           */
/* ************************************************************************** */

size_t  ft_strlen(const char *s);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
char    *ft_strnstr(const char *str, const char *find, size_t len);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);

/* ************************************************************************** */
/*                              Extra functions                               */
/* ************************************************************************** */

char    *ft_strreverse(char *str);
char    *ft_strstr(const char *str, const char *find);
int     ft_strcmp(const char *s1, const char *s2);
void	ft_putchar(char c);
void    ft_putstr(char *str);

#endif
```