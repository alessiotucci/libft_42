/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:37:51 by atucci            #+#    #+#             */
/*   Updated: 2023/01/28 10:43:03 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_lstsize(t_list *lst)
{
	int count;

	count = 0;
	while (lst != NULL)
	{
	count++; // increment the counter 
	lst = lst -> next; // updating the pointer; 
	}
	return (count);
}

