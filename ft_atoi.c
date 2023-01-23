/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:06:15 by atucci            #+#    #+#             */
/*   Updated: 2023/01/23 09:21:38 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The atoi function in C is a standard library function that converts a string of characters, representing an integer, to an actual integer value. The function takes a single argument, which is a pointer to a string of characters (i.e., a char *), and returns an int value.*/ 

int atoi(const char *str)
{
    int num = 0;
    int sign = 1;
    int i = 0;

   while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
   	if (str[i] == '-' || str[i] == '+') // taking care of the sign 
   	{
       if (str[i] == '-') 
	   {
		   sign = -1;
	   }
	i++;
    }

    while  (str[i] >= '0' || str[i] <= '9')
   	{
		num = num * 10 + (str[i] - '0');
        i++;
    }

    return (sign * num); // multiply the result with the sign 
}


