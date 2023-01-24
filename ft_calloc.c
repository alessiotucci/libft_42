/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:06:32 by atucci            #+#    #+#             */
/*   Updated: 2023/01/24 12:26:12 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* in the C programming language, the calloc function is a memory allocation function that is used to allocate a block of memory for an array of elements with a specific number of bytes per element, and then sets all bytes of the allocated memory to zero.*/

void	*calloc(size_t nmemb, size_t size) // nMEMB representing the number of the elements, SIZE the size of each elements in bytes
{
	if (nmemb == 0 || size == 0)
		return (0);
	size_t total_size;
	void *ptr;

	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == 0)
	{
		return (0); // if the allocation fails, it returns a null pointer
	}
	memset(ptr, 0, total_size);
	return (ptr); // otherwise it returns a pointer to the first byte of the Allocated memory
}
