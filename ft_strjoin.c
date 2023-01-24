/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:09:23 by atucci            #+#    #+#             */
/*   Updated: 2023/01/24 10:58:15 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	int len1;
	int len2;
	int lenTot;
	size_t index; // this is the counter
	size_t i;

	i = 0;
	index = 0;
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (len1 == 0 || len2 == 0)
		return (0);		// strings cannot be empty
	lenTot = len1 + len2 + 1;
	str = (char *)malloc(lenTot);
	if (str == 0)
		return (0);  // check the  memory allocation
	while (s1[index])
	{
		str[index] = s1[index];
		index++;
	}
	while (s2[i])
	{
		str[index] = s2[i];
		i++;
		index++;
	}
	str[index] = '\0';
	return (str);


}
int main()
{
	char prefix [] = "ciao";

	char suffix [] = "miao";
	printf( "%s\n", ft_strjoin(prefix,suffix));
}
