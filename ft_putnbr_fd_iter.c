/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_iter.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:30:21 by atucci            #+#    #+#             */
/*   Updated: 2023/01/30 15:30:33 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	num[12];   // Array to store the string representation of the integer
	int		i;         // Index for the `num` array
	long	nb;        // Long integer to store the input integer to handle negative values

	i = 0;
	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);   // Output the '-' sign for negative numbers
		nb = -nb;
	}
	if (nb == 0)
		num[i++] = '0';         // Special case for 0
	while (nb > 0)
	{
		num[i++] = (nb % 10) + '0';   // Store the last digit of `nb` as a character
		nb /= 10;                     // Divide `nb` by 10 for the next iteration
	}
	while (i-- > 0)
		ft_putchar_fd(num[i], fd);   // Output the string representation in reverse order
}
