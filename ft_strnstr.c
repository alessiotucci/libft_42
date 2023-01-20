/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:53:41 by atucci            #+#    #+#             */
/*   Updated: 2023/01/20 16:59:22 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> 
// I entirely copy this from ChatGPT and I need more time to understand this better
//
char *strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t needle_len = strlen(needle);
    if (needle_len == 0)
	{
        return (char *)haystack;
    }
    if (len < needle_len)
	{
        return NULL;
    }
    const char *last = haystack + len - needle_len;
    while (haystack <= last)
	{
        if (*haystack == *needle && memcmp(haystack, needle, needle_len) == 0)
		{
            return (char *)haystack;
        }
        haystack++;
    }
    return (0);
}
// ho COPIATO TUTTO DA CHATGPT E DEVO RICONTROLLARE
#include <stdio.h>
#include <string.h>

int main() {
    char haystack[] = "A simple example";
    char needle[] = "ex";
    char *result;

    result = strnstr(haystack, needle, strlen(haystack));
    if (result)
	{
        printf("'%s' found in '%s' at position %ld\n", needle, haystack, result - haystack);
    }
	else
   	{
        printf("'%s' not found in '%s'\n", needle, haystack);
    }
    return 0;
}


