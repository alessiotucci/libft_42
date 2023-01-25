/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:10:59 by atucci            #+#    #+#             */
/*   Updated: 2023/01/25 10:29:47 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char    to_upper(unsigned int i, char c)
{
    (void)i;
    return (c >= 'a' && c <= 'z' ? c - 32 : c);
}
char	*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	unsigned int	i;
	char	*new;

	if (!s || !f) // check if the input are valid
	return (0);

	new = (char *)malloc(sizeof(char) * (strlen(s) + 1));
	
	if (new == 0) // check if the memory allocation 
		return (0);

	i = 0;
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
int main()
{
    char *s = "HELLO wolrslf";
    char *new_str;

    /* Pass the input string and the tolower function as arguments to ft_strmapi */
    new_str = ft_strmapi(s, to_upper);

    /* Print the result of the function */
    printf("Original string: %s\n", s);
    printf("New string: %s\n", new_str);

    
}
