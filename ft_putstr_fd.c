/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:12:34 by atucci            #+#    #+#             */
/*   Updated: 2023/01/25 11:43:31 by atucci           ###   ########.fr       */
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

int	main()
{
	char cic[] = "yall aint shit";
	int	pob = 1;
	ft_putstr_fd(cic, pob);
	write(1, "\n", 1);
	write(1, "f", 1);

}
