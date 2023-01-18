/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:00:05 by atucci            #+#    #+#             */
/*   Updated: 2023/01/18 11:18:57 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int argum)
{
	if (argum >= 32 && argum <= 126)
		return (1);
	return (0);
}

// including main for testing purpose
#include <stdio.h>

int main()
{
	char prova;

	prova = 'p';
	printf(ft_isprint(prova));
}
