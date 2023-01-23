/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:09:23 by atucci            #+#    #+#             */
/*   Updated: 2023/01/23 18:03:53 by atucci           ###   ########.fr       */
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

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (len1 == 0 || len2 == 0)
		return (0);		// strings cannot be empty
	lenTot = len1 + len2;
	str = (char *)malloc(lenTot);
	if (str == 0)
		return (0);  // check the  memory allocation
	strcpy(str,s1);

}
int main()
{
	char prefix []
	char suffix []
	printf( "%s\n", ft_strjoin(prefix,suffix));
}
