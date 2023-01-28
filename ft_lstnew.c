/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:35:33 by atucci            #+#    #+#             */
/*   Updated: 2023/01/26 16:14:42 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstnew(void *content)
{
	t_list *new; //creating a new list out of thin air

	// we  will use  MALLOC 
	new = (t_list *)malloc(sizeof(t_list));

	// check the memory allocation
		if (new == NULL)
		return (0);
	// initialiaze  the value field
	new->content = content;
	// initialiaze the NEXT FIELD
	new->next = NULL;  
	// return a pointer to the node
	return (new);
}
