/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:02:52 by atucci            #+#    #+#             */
/*   Updated: 2023/01/18 14:23:56 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// the tolower functions converts a uppercase alphabet to a lowercase alphabet
int	ft_tolower(int chad)
{
	if (chad >= 65 && chad <= 90)
		chad += 32;
	return (chad);
}
// including main for testing purpose
#include <unistd.h>

int	main()
{
	char check;
 // I decided to try to use the write function without any luck
	check = 'G';
	write(1, &check, 1);
	ft_tolower(check);
	write(1, "\n" , 1);
	write(1, ft_tolower(check), 1);
	//printf( "%d\n", ft_tolower(check));
}
