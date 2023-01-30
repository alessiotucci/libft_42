/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_fixed.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 14:49:13 by atucci            #+#    #+#             */
/*   Updated: 2023/01/29 14:55:18 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d; // updated version of the code
	char	*s;

	if (!dest && !src)
		return (dest);
	d = (char *)dest; // casting the pointers
	s = (char *)src; // casting the pointers
	
	// checking if there is a overlapping
	if (d < s)
		while (n--)
			*d++ = *s++; 
	else
		while (n--)
			d[n] = s[n];
	return (dest);
}

