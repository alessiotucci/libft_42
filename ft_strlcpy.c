/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:01:53 by atucci            #+#    #+#             */
/*   Updated: 2023/01/19 10:55:03 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *sour, size_t destsize)
{
	size_t cu; // the difference here is in the datatype, instead of unsigned int, you need to use size_t
	size_t di;

	if (destsize <= ft_strlen(dest))
		return (destsize + ft_strlen(sour));
	cu = ft_strlen(dest);
	di = 0;
	while (src[di] != '\0'&& cu + 1 < destsize)
	{
		dest[cu] = sour[di];
		cu++;
		di++;
	}
	dest[cu] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[di]));
}
