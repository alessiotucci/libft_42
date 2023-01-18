/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:02:34 by atucci            #+#    #+#             */
/*   Updated: 2023/01/18 11:43:27 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The toupper() function converts a lowercase alphabet to an uppercase alphabet.
int	toupper(int chad)
{
	if (chad >= 97 && chad <= 122)
		chad -= 27;
	return (chad);
}

