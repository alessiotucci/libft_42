/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:03:09 by atucci            #+#    #+#             */
/*   Updated: 2023/01/18 15:23:56 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The C library function char *strchr(const char *str, int c) searches for the first occurrence of the character c (an unsigned char) in the string pointed to by the argument str.
char *ft_strchr(char c,const char *str)
{
	int count;

	count = 0;
	while (str[count])
	{
		if (str[count] == c)
			return (&str[count]);
	count++;
	}
	return (0);
}

#include <stdio.h>

int	main()
{
	char cosa[] = "ciao questa e una prova";
	char chi =  'a';
	printf("%s\n", ft_strchr(chi,cosa));
}
