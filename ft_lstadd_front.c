/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:36:37 by atucci            #+#    #+#             */
/*   Updated: 2023/01/26 16:39:33 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	// checking the input
	if (new == NULL)
		return; // if new is NULL return immediatly
	if (lst  == NULL)
	{
		// if lst is NULL, set lst to point at new element
		*lst = new;
		return;
	}
	// ARRANGE POINTERS IN THE CORRECT ORDERS!
	
	// set the pointer of the new node to point at the old one
	new->next = *lst;
	// set the new head of the list to the new node
	*lst = new;
}
