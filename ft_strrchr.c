/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:03:23 by atucci            #+#    #+#             */
/*   Updated: 2023/01/20 12:19:56 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*The strrchr() function finds the last occurrence of c (converted to a character) in string . The ending null character is considered part of the string . The strrchr() function returns a pointer to the last occurrence of c in string .
*/ 
#include <string.h>
 char	*ft_strrchr(int d, const char *str)
{
	int len;
	const char *last;

	last = 0;
	len = strlen(str);
	while (len >= 0)
	{
		if (str[len] == d)
		{
			last = &str[len];
			return (char *) last;
		}
		len--;
	}
	return (char *)last;
}

// including main for testing purpose
#include <stdio.h>
int	main()
{
	char tick = 'z';

	char *brosk = "ciao hello hai mangiato halloween";
	printf( "%s\n", ft_strrchr(tick, brosk));
}
