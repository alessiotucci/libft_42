/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:38:50 by atucci            #+#    #+#             */
/*   Updated: 2023/01/28 11:07:30 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstlast(t_list *lst)
{
	// check the  list first
	if (lst == NULL)
		return (0);
	
	// this function works like ft_list_size, it just  return a Node
	while (lst->next != NULL)
	{
	lst = lst -> next; // updating the pointer; 
	}
	return (lst);
}
