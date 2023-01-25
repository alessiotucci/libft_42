/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:13:12 by atucci            #+#    #+#             */
/*   Updated: 2023/01/25 13:27:54 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	// &c work like a regular putchar function
	// fd is the new paramater we pass inside write function
}
void	ft_putnbr_fd(int n, int fd)
{
	// include  the  ft_putchar_fd function
	//
	// max int possible  to stores 
	if (n == -214783648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putnbr_fd(147483648, fd);
	}
	// else  if  with negative number
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
		ft_putnbr_fd(n, fd);
	}

	else  if (n > 9)
	{
	ft_putnbr_fd(n / 10, fd);
	ft_putnbr_fd(n % 10, fd);
	}
	
	// single digit  number 
	else
		ft_putchar_fd(n + 48, fd);
}
	int	main()

{
	int n = 649464;
	ft_putnbr_fd(n, 1);
}
