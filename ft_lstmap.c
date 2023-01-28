/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:45:22 by atucci            #+#    #+#             */
/*   Updated: 2023/01/28 15:27:29 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_list;
	t_list *ely;

	if ( lst == NULL) // checking the input, if its null return
		return (0);
	new_lst = 0;
	while (lst != NULL)
	{
		if ((ely = ft_lstnew(f(lst->content))) == NULL)
		{
			ft_lstclear(&new_lst, del); //
			return (0);
		}
		ft_lstadd_back(&new_lst, ely);
		lst = lst-next;
}
	return (new_lst); // returning the  newly created list
}
