/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:10:04 by atucci            #+#    #+#             */
/*   Updated: 2023/01/24 15:13:11 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

char	**ft_split(char const *s, char c)
{
// how  many strings do I need  to allocate (1);
	int len;
	len = strlen(s);
	int *count =  0;

	int i; // counter  to iterate  throught the string
	i = 0;
	while (i < len)
	{
		while (i < len)
		{
			if (strchr(&c,s[i]) == 0) // return is == there is not corrispondence with the separator char
				break;
			i++;
		}
		
		int old;	//old is an other counter, to check is increment the substring count only if we have the need to do so.
		old = i;
		while (i < len)
		{
			if (strchr(&c,s[i]  != 0)) // return is != there IS a corrispondence with the separator char
				break;
			i++;
		}
	if (i > old) 
		*count = *count + 1; // this is the check to do.
	}
	// now we can use Malloc to allocate the right amount of space for the string;
	char **strings = malloc(sizeof(char *) * *count);

	i = 0; // setting i = 0 because we are starting again from index zero;
	
	int index; 
	index = 0;
	
	char buffer [16384]; // we are creating a buffer to store  the strings

	while (i < len)

	{
		while (i < len)
		{
			if (strchr(&c,s[i]) == 0) // same  thing as before, == look it up
				break;
			i++;
		}
		
		int j = 0;	
		while (i < len)
		{
			if (strchr(&c,s[i]  != 0)) 
				break;
			buffer[j] = s[i];
			j++;
			i++;
		}
		if (j > 0)
		{
			buffer[j] = '\0';
		
			int alloca = sizeof(char) * (strlen(buffer) + 1);

			strings[index] = malloc(alloca);
			strcpy(strings[index], buffer);
			index++;
		}
		

	}
return (strings);
}

int main()
{
	char prova[] = "	tu	io	ci	";
	char t = '\t';
	char **splitted = ft_split(prova,t);
	
	// for loops are forbidden but I use it for testing purpose
	for (int i = 0; i < 4; i++)
		printf( "%s\n", splitted[i]);
}

