/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:11:17 by atucci            #+#    #+#             */
/*   Updated: 2023/01/25 15:26:16 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//EXPLANATION	

/* The main difference with the ft_strmapi function is that ft_striteri modifies the original string rather than creating a new one.
 

It uses a void function pointer, so the function passed to it doesn't need to return anything.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void	to_upper(unsigned int i, char *c)
{
	if (i)
	{
	if(*c >= 'a' && *c <= 'z')
		*c -= 32; // making it upper case
	}
}


void	ft_striteri(char *s, void (*f)(unsigned int,char*))
{
	unsigned int	i;
	if (!s || !f) // check if the paramater passed are valid
		return;
	i = 0;
	while (s[i])  // counter set to zero to iterate throught the string
	{
		f(i,&s[i]); // apply the functions 
		i++;
	}
}

int main()
{
    char s[] = "HELLO wolrslf";
	 printf("Original string: %s\n", s);
    /* Pass the input string and the tolower function as arguments to ft_striteri */
    ft_striteri(s, to_upper);

    /* Print the result of the function */
    printf("New string: %s\n", s);


}
