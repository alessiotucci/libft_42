/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:59:33 by atucci            #+#    #+#             */
/*   Updated: 2023/01/18 10:50:24 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// in this function I can use the two previous one together...
// to do so I need to include my custom made Library...

#include "libft.h"
int ft_isalnum(int argum)
{
	return ((ft_isalpha(argum) || ft_isdigit(argum)); 
}
