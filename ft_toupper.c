/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:02:34 by atucci            #+#    #+#             */
/*   Updated: 2023/01/18 14:06:31 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The toupper() function converts a lowercase alphabet to an uppercase alphabet.
int	ft_toupper(int chad)
{
	if (chad >= 97 && chad <= 122)
		chad -= 32;
	return (chad);
}
// including main to test the function 
#include <stdio.h> 
int	main()
{
	char ciao;

	ciao = '+';
	printf( "%d\n", ft_toupper(ciao));
}
