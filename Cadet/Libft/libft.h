#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>

size_t ft_wordcount(char const *s, char c);
int ft_strsubcount(char const *s, int index, char c);	
char** ft_strsplit(char const *s, char c);
char *ft_strnew(size_t size); 

#endif
