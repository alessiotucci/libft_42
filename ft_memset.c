/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:00:41 by atucci            #+#    #+#             */
/*   Updated: 2023/01/19 15:36:40 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*the memset function is used to set a block of memory to a specific value. It takes three arguments: a pointer to the memory location to be set, the value to set the memory to, and the number of bytes to set. */ 

#include <stddef.h>

void	*ft_memset(void *dest, int v, size_t count)
{
	// check if the dest is not null
	if (dest == 0)
		return (0);
	// we  need to do the typecasting 
	char *char_dest = (char *) dest;

	size_t c;
	c = 0;

	while (c < count)
	{
	char_dest[c] = v; // I want to make  sure the  puntator aritmetics rights, i need to double check this
	c++;
	}
	return(char_dest);
}

// including main for testing purpose
#include <stdio.h>
#include <string.h>
int	main()
{
	char desty[40] = "ciao a tutti";
	printf( "%s\n", desty);
	printf( "%s\n", ft_memset(desty+5,'0', 5));
}

