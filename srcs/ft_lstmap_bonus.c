/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/18 16:35:31 by nismail       #+#    #+#                 */
/*   Updated: 2021/11/16 21:28:57 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
*
* The ft_lstlast() function iterates the list ’lst’ 
* and applies the function ’f’ to the content of each 
* element. Creates a new list resulting of the 
* successive applications of the function ’f’. The 
* ’del’ function is used to delete the content of an 
* element if needed.
*
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_item;

	if (!lst || !f)
		return (0);
	new_item = NULL;
	new_lst = new_item;
	while (lst)
	{
		new_item = ft_lstnew(f(lst->content));
		if (!new_item)
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&new_lst, del);
			return (0);
		}
		lst = lst->next;
		ft_lstadd_back(&new_lst, new_item);
	}
	return (new_lst);
}
