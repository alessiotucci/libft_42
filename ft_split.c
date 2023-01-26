/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:10:04 by atucci            #+#    #+#             */
/*   Updated: 2023/01/26 12:47:40 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **ft_split(char const *s, char c)
{
	int Ci; // 	counter of the index of the substring
	int Cs; // counter to itereate throught the input
	char **strings; // declaring the 2D array
	int index; // index of the substrings
	int start; // start of  a substring
	int end; // end of a substring
	int sublen; // lenght of the substring

	Cs = 0;
	Ci = 0;
	while (Cs < strlen(s))
	{
		while (Cs < strlen(s) && s[Cs] == c)
		{
			Cs++; // increment the Cs counter if the char is a separator
		}

		if (Cs < strlen(s)) // this IF statement allow me to increment Ci correctly
		{
			Ci++; // increment  the Ci counter, index of the substrings
		}

		while (Cs < strlen(s) && s[Cs] != c)
		{
			Cs++;
		}
	}

	strings = malloc(sizeof(char *) * (Ci + 1));
	strings[Ci] = 0;

	index = 0;
	Cs = 0; // resetting the input counter to zero
	while (Cs < strlen(s))
	{
		while (Cs < strlen(s) && s[Cs] == c)
		{
			Cs++;
		}
		if (Cs < strlen(s))
		{
			start = Cs;
		while (Cs < strlen(s) && s[Cs] != c)
		{
			Cs++;
		}
		end = Cs;
		sublen = end - start; // Calculating the lenght of the  substring
		strings[index] = malloc(sizeof(char) * (sublen + 1));
		strncpy(strings[index], s + start, sublen); // copying the string
		strings[index][sublen] = '\0'; // adding the null terminator
		index++; // incrementing the index
		}
	}
	return (strings);
}

int main()
{
    char str[] = "hello   world  how are you";
    char separator = ' ';
    char **splitted = ft_split(str, separator);

    int i = 0;
    while (splitted[i] != NULL)
    {
        printf("%s\n", splitted[i]);
        i++;
    }
}

