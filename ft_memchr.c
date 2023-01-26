/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:03:57 by atucci            #+#    #+#             */
/*   Updated: 2023/01/25 19:22:39 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* memchr is used to search for a specific character in a block of memory. It takes three arguments: a pointer to the start of the memory block, the character to search for, and the number of bytes to search. It returns a pointer to the first occurrence of the character in the memory block, or NULL if the character is not found.*/

#include <stddef.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	// I need to cast the void pointers to a char pointer
	const char *p = str;
	// I do  the same thing for the int c to a char c 
	//(char) c;

	size_t count = 0;

	while (count < n) 
	{
		if (*p == c)
		return ((void *)p);
	count++;
	p++;
	}
return (0);
}
// including main for Testing purpose
#include <stdio.h>
#include <string.h>

int	main()
{
	char add[] = "alessiotucci33@gmail.com";
	char find  = '#';
	printf( "%s\n", ft_memchr(add, find, strlen(add)));

	
// trying to do other testing
	char ad[] = {3, 3, 5, 0, 6};
	char fid  = 0;
	printf( "%s\n", ft_memchr(ad, fid, 4 ));


}
