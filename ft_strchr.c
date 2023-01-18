/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:03:09 by atucci            #+#    #+#             */
/*   Updated: 2023/01/18 16:24:21 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The C library function char *strchr(const char *str, int c) searches for the first occurrence of the character c (an unsigned char) in the string pointed to by the argument str.
char *ft_strchr(int d,const char *str)
{

	while (*str != '\0')
	{
		if (*str == d)
			return (char *) str;
	str++;
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
