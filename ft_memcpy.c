/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:01:12 by atucci            #+#    #+#             */
/*   Updated: 2023/01/19 14:14:12 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* memcpy is a function that copies a specified number of bytes from one memory location to another. It is a part of the C standard library and can be used to copy memory between arrays, structs, and other blocks of memory.*/

#include <stddef.h> 

void	*ft_memcpy(void *dest, void *sour, size_t n)
{
	// first thing to check if the resources is correctly allocated
	if (dest == 0)
		return (0);

	// I need to do some typecasting to work with void pointers
	char *char_dest = (char *) dest;
	char *char_sour = (char *) sour;

	size_t count;
	count = 0;

	while (count < n)
	{
		char_dest[count] = char_sour[count];
		count++;
	}
	return (char_dest);
}

// including main for testing purpose
#include <stdio.h>
#include <string.h>

int	main()
{
	char prova[] = "ciao a tutti";
	char qui[40];

	printf( "%s\n", ft_memcpy(qui, prova, strlen(prova)));
}
