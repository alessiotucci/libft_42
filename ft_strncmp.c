/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:03:43 by atucci            #+#    #+#             */
/*   Updated: 2023/01/19 11:43:27 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// i need  to  include stddef.h to use  size_t

#include <stddef.h> 

size_t	ft_strncmp(const char *str1, const char *str2, size_t limit)
{
	size_t count;

	count = 0;
	while ((str1[count] != '\0' || str2[count] != '\0')
		&& count < limit)
	{
		if (str1[count] > str2[count])
		return (1);
		else  if (str1[count] < str2[count])
		return (-1);
	count++;
	}
	return (0);
}
// including main for testing  purpose
#include <stdio.h>

int	main()
{
	int my_limit = 2;
	char st[] = "sei scarso";
	char ss[] = "sei marso";
	printf( "%zu\n", ft_strncmp(st, ss,  my_limit));
}	
