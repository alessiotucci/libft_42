/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:01:53 by atucci            #+#    #+#             */
/*   Updated: 2023/01/23 09:53:03 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 /* The strlcpy function is a C function that copies a specified number of characters from a source string to a destination string and add a null character. It is a variation of the standard C library function strcpy, but with an additional parameter that specifies the maximum number of characters that should be copied. */ 

size_t ft_strlcpy(char *dest, const char *sour, size_t size)
{
	size_t src_len;
	size_t len;

	src_len = ft_strlen(sour);
	len = src_len;
	if (size > 0)
	{
			if (src_len > size)
			{
				len = size - 1;
			}
		ft_memcpy(dest,sour,len);
		dest[len] = '\0';
	}
	return (src_len);
}
