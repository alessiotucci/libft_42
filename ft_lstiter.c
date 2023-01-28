/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:44:18 by atucci            #+#    #+#             */
/*   Updated: 2023/01/28 13:34:37 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstiter(t_list *lst, void (*f) (void *))
{
	if (lst == NULL || f == NULL) // checking if the  input is valid
		return ;
	while (lst != NULL) // iterate  throught  the  lenght of the list
	{
		f(lst->content); // applying the f  function to the  current  node;
		lst = lst->next; // updating  the node of the list;
	}
}
