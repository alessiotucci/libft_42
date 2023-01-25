/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:12:54 by atucci            #+#    #+#             */
/*   Updated: 2023/01/25 12:10:30 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <unistd.h>
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	// &c work like a regular putchar function
	// fd is the new paramater we pass inside write function
}

void	ft_putstr_fd(char *c, int fd)
{
	size_t count = 0;
	if (c != 0 ) // checking the input
	{
		while (c[count])
		{
		ft_putchar_fd(c[count], fd);
		count++;
		}
	}
	// &c work like a regular putchar function
	// fd is the new paramater we pass inside write function
}

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd( '\n',fd);
}

int main()
{
	char stringa[] = "ciao come stai";
	ft_putendl_fd(stringa, 1);
	write(1, "%", 1);
}
