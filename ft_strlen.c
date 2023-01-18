/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:00:18 by atucci            #+#    #+#             */
/*   Updated: 2023/01/18 14:40:00 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//It is defined in the <stddef.h> header and is typically an unsigned integer

#include <stddef.h>


// size_t is a data type that is used to represent the size of an object in bytes.
size_t	ft_strlen(const char *str)
{
	size_t count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

// including main for testing purpose
#include <stdio.h> 

int	main()
{
	char *stringa = "ciaao";
	printf("%zu\n" , ft_strlen(stringa));
}
// You should use size_t instead of int when you are working with sizes of objects such as arrays or memory allocation, because size_t is guaranteed to be large enough to hold the maximum size of an object, whereas int may not be 
//
// Using size_t can also help to prevent errors and make your code more portable, as it ensures that your code will work correctly on systems with different word sizes. It's always a good practice to use appropriate types, that's why size_t is recommended instead of int.
