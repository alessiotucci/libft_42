/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:06:46 by atucci            #+#    #+#             */
/*   Updated: 2023/01/23 10:55:46 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *sour)
{
	char *dupli; // declaration of a pointer
	int len;

	len = ft_strlen(sour);
	dupli = malloc(len * sizeof(char));
	
	// we need to check if the  memory allocation is done correctly
	if (dupli == '\0';)
		return (0);
	return (ft_strcpy(dupli,sour));
}
