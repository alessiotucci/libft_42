/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:04:07 by atucci            #+#    #+#             */
/*   Updated: 2023/01/20 11:26:26 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* memchr is used to search for a specific character in a block of memory.
 *
 *  It takes three arguments: a pointer to the start of the memory block, the character to search for, and the number of bytes to search. 
 *
 *  It returns a pointer to the first occurrence of the character in the memory block, or NULL if the character is not found. */

#include <stddef.h>

int	ft_memcmp(const void* ptr1, const void* ptr2, size_t num)
{
	// declaring a counter  to iterate  thorought the array
	size_t count = 0;

	// casting void pointers as usuals
	const unsigned char *p1 = ptr1;
	const unsigned char *p2 = ptr2;
	
	while (count < num)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
	p1++;
	p2++;
	count++;
	}
return (0);
}

// including main for testing purpose

#include <stdio.h>
int	main()
{
	char s1[] = "amico";
	char s2[] = "amicO";
	printf( "%d\n", ft_memcmp(s1,s2, 5));

}

