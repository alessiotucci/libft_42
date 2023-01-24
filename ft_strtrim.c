/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:09:50 by atucci            #+#    #+#             */
/*   Updated: 2023/01/24 12:25:05 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	if (!s || !(new_str = (char *)malloc(len + 1)))
		return (0);
	i = start;
	j = 0;
	while (i < strlen(s) && j < len)
		new_str[j++] = s[i++];
	new_str[j] = '\0';
	return (new_str);
}
// THIS IS THE FUNCTIONN 
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t i;

	if (!s1 || !set) // checking if the paramater  passed are any good
		return (0);
	while (*s1 && strchr(set, *s1))
		s1++; // checking from the index 0;
	i = strlen(s1);
	while (i && strchr(set, s1[i]))
		i--; // checking from the last index;
	return (ft_substr(s1, 0, i + 1)); // finally returning the string using the substr function
}
int main() 
{
    char *str = "\t\nThis is a test string   ";
    char *set = "\t\n";
    char *trimmed = ft_strtrim(str, set);
    printf("Original string: %s\n", str);
    printf("Trimmed string: %s\n", trimmed);
}

