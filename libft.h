/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:38:39 by atucci            #+#    #+#             */
/*   Updated: 2023/01/17 11:47:34 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int argument);
int ft_isdigit(int argument);
int ft_isalnum(int argument);
int ft_isascii(int argument);
int ft_isprint(int argument);
int ft_strlen(char *str);
void ft_memset();
void ft_bzero();
void ft_memcpy();
void ft_memmove()
ft_strlcpy();
ft_strlcat();
int ft_toupper(int argument);
int ft_tolower(int argument);
char *ft_strchr();
char *ft_strrchr();
int ft_strncmp();
void *ft_memchr();
int ft_memcmp();
char *ft_strnstr();
int ft_atoi();
void *ft_calloc();
char *ft_strdup();

/* In this second part, you must develop a set of functions that are either not in the libc,
or that are part of it but in a different form. */ 

char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);
char *ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char *s, void (*f)(unsigned int, char*));
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);

// bonus part, I'm not sure if ill do it...
//discover that manipulating lists is even more useful.
