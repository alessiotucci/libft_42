/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:40:01 by atucci            #+#    #+#             */
/*   Updated: 2023/01/28 11:32:00 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *temp; // this is a temporary variable needed

	// check the input;
	if (new = NULL)
		return ;
	if (*lst = NULL) // if the list is empty
		*lst = new; // update the  list and  add  it to the first  and last place :)
		return ;
	// after this check we can procede to update the last node of the list;
	// to do so, we can use the ft_listLast function
	temp = ft_lstlast(*lst);
	temp->next = new;
	// temp has the same values as the last  node, and it updates the pointer  to point  to the new node 
	
}
