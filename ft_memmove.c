/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:01:30 by atucci            #+#    #+#             */
/*   Updated: 2023/01/19 16:55:06 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

/* The memmove function in C is used to copy a block of memory from one location to another. It is similar to the memcpy function, but it can handle overlapping memory regions */

void	*ft_memmove(void *dest, const void *sour, size_t n)
{
	// first thing I would do is check wheter my destination is null or not
	if (dest == 0)
		return (0);
	// then I need to cast my void pointers
	char *d = dest;
	const char *s = sour;
	// memmove is capable of  handling overlapping so there are two cases
	if (d < s)
	{
		size_t count = 0;
		while(count < n)
		{
			d[count] = s[count];
			count++;
		}
	}
	size_t cot = n;
	while (cot > 0)
	{
		d[cot - 1] = s[cot - 1];
		cot--;
	}
	return (dest);
}
#include <stdio.h>

int	main()
{
	int num[5] = {1,2,3,4,5};
	int des[5];

	ft_memmove(num,des, 3);

	int count = 0;
	while (count < 5)
	{
		printf( "%d\t", des[count]);
		count++;
	}

}
