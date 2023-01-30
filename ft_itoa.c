/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:10:24 by atucci            #+#    #+#             */
/*   Updated: 2023/01/30 11:23:04 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	digits(int n)
{
	int count = 0;
	if (n > 0)
		count = 0;
	else 
		count = 1;

// (n) is less than or equal to zero. If it is, then the code is setting the length (len) to be 1. 

//If it's not, then the code is setting the length (len) to be 0.
	while (n != 0) 
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int	len;
	char	*res;

	if (n == -214783648) // special case for the lowest int value
		return ("-214783648");
	len = digits(n);
	res = (char *)malloc((len + 1) * sizeof(char));
	if (res == 0) // checking the memory allocation
		return (0);

	if (n < 0) // negative number, handling the minus sign
	{
		res[0] = '-'; // minus on before the first digit
		res[len--] = '\0'; 
		n = -n; // make this  positive after handling the  sign
	}
	else
		res[len--] = '\0'; // starting from right to left

	if (n == 0) // zero number, single digits
	{
		res[0] = '0';
	}
	while (n > 0) // positive number, easy work
	{
	res[len--] = (n % 10) + '0';
	n /= 10;
	}
	return (res);
}
#include <stdio.h>
int main()
{
	int n = 45;
	printf( "%s\n",  ft_itoa(n));
}
