/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:11:42 by atucci            #+#    #+#             */
/*   Updated: 2023/01/25 15:36:27 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	// &c work like a regular putchar function
	// fd is the new paramater we pass inside write function
}

int	main()
{
	char cic = 'y';
	int	pob = 1;
	ft_putchar_fd(cic, pob);
	// When you call the write function, you pass it the file descriptor of the file or resource you want to write to 
	write(1, "\n", 1);
	//  the standard input, output, and error file descriptors are 0, 1, and 2 respectively
	write(1, "f", 1);

}
