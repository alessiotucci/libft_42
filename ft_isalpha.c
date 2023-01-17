/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:39:48 by atucci            #+#    #+#             */
/*   Updated: 2023/01/17 14:36:27 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int argum) // this is the first function to include in the library
{
	return ((argum >= 97 && argum <= 128) || (argum >= 65 && argum <= 90));
}

#include <stdio.h> // including this library for testing purpose 
int	main()
{
	char num;

	num = '0';
	printf( "%d\n", ft_isalpha(num));
}
