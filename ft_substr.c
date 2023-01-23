/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:09:03 by atucci            #+#    #+#             */
/*   Updated: 2023/01/23 17:29:05 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	size_t count;

	count = 0;
	str = (char *)malloc(len);
	if (str == 0)
		return (0); // check if the  allocation memory went well.
		if (start >= strlen(s))
	{
		str[0] = '\0';
		return str;	
	}
	while (s[start] != '\0' && count < len) // count < len its handling  the  case-limit where  its given a larger lenght than the  actual string
	{
		str[count] = s[start];
		count++;
		start++;
	}
	str[count] = '\0';
	return (str);
}

int	main()
{
	char prova[] = "sweater";
	printf( "%s\n", ft_substr(prova, 20, 3));
}

