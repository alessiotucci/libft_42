/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:00:55 by atucci            #+#    #+#             */
/*   Updated: 2023/01/25 18:22:04 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The bzero function in C is used to set a block of memory to zero. It is similar to the memset function, but it always sets the memory to the value 0. Here is the prototype of the bzero function.*/

void	bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}


