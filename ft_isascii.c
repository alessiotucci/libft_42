/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:59:50 by atucci            #+#    #+#             */
/*   Updated: 2023/01/18 11:02:28 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 // The isascii() function tests if a given character, in the current locale, can be represented as a valid 7–bit US-ASCII character.

int	ft_isascii(argum)
{
	return (argum >= 0 && argum <= 127);
}
